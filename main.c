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
	char* L16 = malloc(sizeof(char) * 33);
	L16[32] = '\0';
	char* R16 = malloc(sizeof(char) * 33);
	R16[32] = '\0';
	splitBinary(CIP, L16, R16);

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
	for(int i = 0; i < 32; i++) {
		CFaltBinary[i] = convert(CFalt[i]);
	}

	char* CFaltIP[32];
	for(int i = 0; i < 32; i++) {
		CFaltIP[i] = processIP(CFaltBinary[i]);
	}

	char* L16Falt[32];
	char* R16Falt[32];
	for(int i = 0; i < 32; i++) {
		L16Falt[i] = malloc(sizeof(char) * 33);
		R16Falt[i] = malloc(sizeof(char) * 33);
		L16Falt[i][32] = '\0';
		R16Falt[i][32] = '\0';
		splitBinary(CFaltIP[i], L16Falt[i], R16Falt[i]);
	}

	//Xor and invert of the P permutation for the XOR of R16 and R16'
	char* XORR16[32];
	for(int i = 0; i < 32; i++) {
		XORR16[i] = xoring(R16, R16Falt[i], 32);
	}

	char* PInvertXOR[32];
	for(int i = 0; i < 32; i++) {
		PInvertXOR[i] = processPInvert(XORR16[i]);
	}

	//Extension of R15
	char* ER15 = processExtention(L16);

	char* ER15Falt[32];
	for(int i = 0; i < 32; i++) {
		ER15Falt[i] = processExtention(L16Falt);
	}



	free(CBinary);
	free(CIP);
	free(L16);
	free(R16);
	free(ER15)
	for(int i = 0; i < 32; i++) {
		free(CFaltBinary[i]);
		free(CFaltIP[i]);
		free(L16Falt[i]);
		free(R16Falt[i]);
		free(XORR16[i]);
		free(PInvertXOR[i]);
		free(ER15Falt[i]);
	}
}