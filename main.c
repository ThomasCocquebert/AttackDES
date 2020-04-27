#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "hexaconverter.h"
#include "permutation.h"
#include "sbox.h"
#include "xor.h"

int main(int argc, char** argv) {
	//Construction of the split in R16 and L16 for the right cyphered text
	char C[17] = "B28CE4DE649B24C7";
	char* CBinary = convert(C);
	char* CIP = processIP(CBinary);
	if(!strncmp(CIP, "", 64)) {
		free(CBinary);
		free(CIP);
		exit(EXIT_FAILURE);
	}
	free(CBinary);
	char* L16 = malloc(sizeof(char) * 33);
	L16[32] = '\0';
	char* R16 = malloc(sizeof(char) * 33);
	R16[32] = '\0';
	splitBinary(CIP, L16, R16);
	free(CIP);

	//Constrcution of the split in R16 and L16 for the wrong cyphered text
	char CFalt[32][17] = {
		"B088E49E649A24D7", "B29EE49A649B24C7", "B28CE6DA649A24C7", "B2DCE098749A24C7", "B2DCE0DA769B24C7", "B3CCE0DE649924C7",
		"B28CE0DE749B26C7", "B38CE4DF748F24C5", "BACCE0DF648B24C7", "B284E4DF248B24C7", "B28CECDF249F24C7", "B28CF4D7248F24C6",
		"F28CE4DF6CCB24C7", "B28CF4DE649324C6", "F28CE4DE64DB2CC6", "B28CF4DE64DB258E", "D28CF4DE60DB34C6", "B2ACE4DE649B3487",
		"B28CC4DE609B2587", "A68CA5FE609B2487", "A68CE4DE449B3587", "A68CE5DE64BB24C7", "B28CA5DE649B04C7", "B68CA5DE659B64E7",
		"268CA4DE659B60C7", "B20CE4CE659B24C7", "B28C64DE659B20C7", "B288E44E649B60D3", "B288E4CEE59B24D7", "B289E4DE641B24C7",
		"B28CE4DE649BA4D3", "B29DE4DE649A2453"
	};

	char* CFaltBinary[32];
	char* CFaltIP[32];
	for(int i = 0; i < 32; i++) {
		CFaltBinary[i] = convert(CFalt[i]);
		CFaltIP[i] = processIP(CFaltBinary[i]);
		if(!strncmp(CFaltIP[i], "", 64)) {
			free(CFaltBinary[i]);
			free(CFaltIP[i]);
			free(L16);
			free(R16);
			exit(EXIT_FAILURE);
		}
		free(CFaltBinary[i]);
	}

	char* L16Falt[32];
	char* R16Falt[32];
	for(int i = 0; i < 32; i++) {
		L16Falt[i] = malloc(sizeof(char) *33);
		R16Falt[i] = malloc(sizeof(char) *33);
		L16Falt[i][32] = '\0';
		R16Falt[i][32] = '\0';
		splitBinary(CFaltIP[i], L16Falt[i], R16Falt[i]);
		free(CFaltIP[i]);
	}

	//XOR and P-1(R16 XOR R16')
	char* XORR16[32];
	char* PInvertXOR[32];
	for(int i = 0; i < 32; i++) {
		XORR16[i] = xoring(R16Falt[i], R16, 32);
		if(strncmp(XORR16[i], "", 32) == 0) {
			free(L16);
			free(R16);
			for(int cpt = 0; cpt < 32; cpt++) {
				free(L16Falt[cpt]);
				free(R16Falt[cpt]);
			}
			exit(EXIT_FAILURE);
		}
		PInvertXOR[i] = processPInvert(XORR16[i]);
		if(strncmp(XORR16[i], "", 32) == 0) {
			free(L16);
			free(R16);
			for(int cpt = 0; cpt < 32; cpt++) {
				free(L16Falt[cpt]);
				free(R16Falt[cpt]);
				free(XORR16[cpt]);
			}
			exit(EXIT_FAILURE);
		}
	}

	//PInvert for R15 and R15'
	char* PInvertR15 = processPInvert(L16);
	if(strncmp(PInvertR15, "", 32) == 0) {
		free(L16);
		free(R16);
		for(int cpt = 0; cpt < 32; cpt++) {
			free(L16Falt[cpt]);
			free(R16Falt[cpt]);
			free(XORR16[cpt]);
			free(PInvertXOR[cpt]);
		}
		exit(EXIT_FAILURE);
	}

	char* PInvertR15False[32];
	for (int i = 0; i < 32; i++) {
		PInvertR15False[i] = processPInvert(L16Falt[i]);
		if(strncmp(PInvertR15False[i], "", 32) == 0) {
			free(L16);
			free(R16);
			free(PInvertR15);
			for(int cpt = 0; cpt < 32; cpt++) {
				free(L16Falt[cpt]);
				free(R16Falt[cpt]);
				free(XORR16[cpt]);
				free(PInvertXOR[cpt]);
			}
			exit(EXIT_FAILURE);
		}
	}

	//Processing of S(E(R15) XOR K16)) and S(E(R15') XOR K16)
	char** splitPInvertR15 = splitBlocks4bits(PInvertR15);
	if(splitPInvertR15 == NULL) {
		free(L16);
		free(R16);
		free(PInvertR15);
		for(int cpt = 0; cpt < 32; cpt++) {
			free(L16Falt[cpt]);
			free(R16Falt[cpt]);
			free(XORR16[cpt]);
			free(PInvertXOR[cpt]);
			free(PInvertR15False[cpt]);
		}
		exit(EXIT_FAILURE);
	}
	char** splitPInvertR15Falt[32];
	for(int i = 0; i < 32; i++) {
		splitPInvertR15Falt[i] = splitBlocks4bits(PInvertR15);
		if(splitPInvertR15Falt[i] == NULL) {
			free(L16);
			free(R16);
			free(PInvertR15);
			for(int cpt = 32; cpt < 32; cpt++) {
				free(L16Falt[cpt]);
				free(R16Falt[cpt]);
				free(XORR16[cpt]);
				free(PInvertXOR[cpt]);
				free(PInvertR15False[cpt]);
			}
			for(int cpt = 0; cpt < 8; cpt++) {
				free(splitPInvertR15[cpt]);
			}
			free(splitPInvertR15);
			exit(EXIT_FAILURE);
		}
	}

	//Creation of the 4 possiblities of the eight S-box
	int tmp;
	char* reverseSbox[8][4];
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 4; j++) {
			reverseSbox[i][j] = malloc(sizeof(char) * 7);
			reverseSbox[i][j][6] = '\0';
			strncpy(reverseSbox[i][j], "", 6);
		}
		tmp = bits_6_ToInt(splitPInvertR15[i]);
		if(tmp == -1) {
			printf("Error : can't build possibilities of reverse Sbox\n");
			free(L16);
			free(R16);
			free(PInvertR15);
			for(int cpt = 0; cpt < 32; cpt++) {
				free(L16Falt[cpt]);
				free(R16Falt[cpt]);
				free(XORR16[cpt]);
				free(PInvertXOR[cpt]);
				free(PInvertR15False[cpt]);
				for(int i = 0; i < 8; i++) {
					free(splitPInvertR15Falt[cpt][i]);
				}
				free(splitPInvertR15Falt[cpt]);
			}
			for(int cpt = 0; cpt < 8; cpt++) {
				free(splitPInvertR15[cpt]);
			}
			free(splitPInvertR15);
			exit(EXIT_FAILURE);
		}
		findInput(reverseSbox[i][0], reverseSbox[i][1], reverseSbox[i][2], reverseSbox[i][3], i, tmp);
	}

	//Calc E(R15')
	char* ER15Falt[32];
	for(int i =0; i < 32; i++) {
		ER15Falt[i] = processExtension(L16Falt[i]);
	}

	//Splittin E(R15')
	char** splitER15Falt[32];
	for(int i = 0; i < 32; i++) {
		splitER15Falt[i] = splitBlocks6bits(ER15Falt[i]);
	}

	//Result E(R15') and K16
	char* R15XORK16[32][4];
	for(int i =0; i < 32; i++) {
		for(int j = 0; j < 4; j++) {
			R15XORK16[i][j] = malloc(sizeof(char) * 7);
			R15XORK16[i][j][6] = '\0';
			strncpy(R15XORK16[i][j], "", 6);
		}
	}

	//SBOX with R15XORK16
	char* sboxR15K16[32][8][4];
	for(int i = 0; i < 32; i++) {
		for(int j = 0; j < 8; j++) {
			for(int k = 0; k < 4; k++) {
				sboxR15K16[i][j][k] = malloc(sizeof(char) * 5);
				sboxR15K16[i][j][k][4] = '\0';
				processSbox(reverseSbox[j][k], j, sboxR15K16[i][j][k]);
			}
		}
	}

	//Recompositon of Sbox output
	char* sboxR15[32][4];
	for(int i = 0; i < 32; i++) {
		for(int j = 0; j < 4; j++) {
			sboxR15[i][j] = malloc(sizeof(char) * 33);
			sboxR15[i][j][32] = '\0';
			char tmp[33] = "";
			tmp[32] = '\0';
			strncat(tmp, sboxR15K16[i][0][j], 5);
			strncat(tmp, sboxR15K16[i][1][j], 5);
			strncat(tmp, sboxR15K16[i][2][j], 5);
			strncat(tmp, sboxR15K16[i][3][j], 5);
			strncat(tmp, sboxR15K16[i][4][j], 5);
			strncat(tmp, sboxR15K16[i][5][j], 5);
			strncat(tmp, sboxR15K16[i][6][j], 5);
			strncat(tmp, sboxR15K16[i][7][j], 5);
		}
	}

	//Split of PInvertXOR
	char** splitPInvertXOR[32];
	for(int i = 0; i < 32; i++) {
		splitPInvertXOR[i] = splitBlocks4bits(PInvertXOR[i]);
	}

	char* XOR_S_E_R15_S_E_R15Falt[32][8][4];
	for(int i = 0; i < 32; i++) {
		for(int j = 0; j < 8; j++) {
			for(int k = 0; k < 4; k++) {
				XOR_S_E_R15_S_E_R15Falt[i][j][k] = xoring(sboxR15K16[i][j][k], splitPInvertR15[j],4);
			}
		}
	}

	/*

	char* possibleKey[8][32];
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 32; j++) {
			possibleKey[i][j] = malloc(sizeof(char) * 7);
			possibleKey[i][j][6] = '\0';
			for(int k= 0; k < 4; k++){
				if(!strncmp(splitPInvertXOR[j],XOR_S_E_R15_S_E_R15Falt[j][i][k], 5)) {
					possibleKey[i][j],
				}
			}
		}
	}
	*/


	free(L16);
	free(R16);
	free(PInvertR15);
	for(int cpt = 0; cpt < 32; cpt++) {
		free(L16Falt[cpt]);
		free(R16Falt[cpt]);
		free(XORR16[cpt]);
		free(PInvertXOR[cpt]);
		free(PInvertR15False[cpt]);
		for(int i = 0; i < 8; i++) {
			free(splitPInvertR15Falt[cpt][i]);
			free(splitER15Falt[cpt][i]);
			free(splitPInvertXOR[cpt][i]);
		}
		free(splitPInvertXOR[cpt]);
		for(int i = 0; i < 4; i++) {
			free(R15XORK16[cpt][i]);
			free(sboxR15[cpt][i]);
		}
		free(splitPInvertR15Falt[cpt]);
		free(splitER15Falt[cpt]);
		free(ER15Falt[cpt]);
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 4; j++) {
				free(sboxR15K16[cpt][i][j]);
			}
		}
		for(int i = 0; i < 8; i++) {
			for (int j = 0; j < 4; j++) {
				free(XOR_S_E_R15_S_E_R15Falt[cpt][i][j]);
			}
		}
	}
	for(int cpt = 0; cpt < 8; cpt++) {
		free(splitPInvertR15[cpt]);
		free(reverseSbox[cpt][0]);
		free(reverseSbox[cpt][1]);
		free(reverseSbox[cpt][2]);
		free(reverseSbox[cpt][3]);
	}
	free(splitPInvertR15);

	exit(EXIT_SUCCESS);
}