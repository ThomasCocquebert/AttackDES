#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void initIP(int* ip) {

	ip[0] = 58; ip[1] = 50; ip[2] = 42; ip[3] = 34; ip[4] = 26; ip[5] = 18; ip[6] = 10; ip[7] = 2;
	ip[8] =	60; ip[9] = 52; ip[10] = 44; ip[11] = 36; ip[12] = 28; ip[13] = 20; ip[14] = 12; ip[15] = 4;
	ip[16] = 62; ip[17] = 54; ip[18] = 46; ip[19] = 38; ip[20] = 30; ip[21] = 22; ip[22] = 14; ip[23] = 6;
	ip[24] = 64; ip[25] = 56; ip[26] = 48; ip[27] = 40; ip[28] = 32; ip[29] = 24; ip[30] = 16; ip[31] = 8;
	ip[32] = 57; ip[33] = 49; ip[34] = 41; ip[35] = 33; ip[36] = 25; ip[37] = 17; ip[38] = 9; ip[39] = 1;
	ip[40] = 59; ip[41] = 51; ip[42] = 43; ip[43] = 35; ip[44] = 27; ip[45] = 19; ip[46] = 11; ip[47] =  3;
	ip[48] = 61; ip[49] = 53; ip[50] = 45; ip[51] = 37; ip[52] = 29; ip[53] = 21; ip[54] = 13; ip[55] = 5;
	ip[56] = 63; ip[57] = 55; ip[58] = 47; ip[59] = 39; ip[60] = 31; ip[61] = 23; ip[62] = 15; ip[63] = 7;

}

void initIPInvert(int* ip) {

	ip[0] = 40; ip[1] = 8; ip[2] = 48; ip[3] = 16; ip[4] = 56; ip[5] = 24; ip[6] = 64; ip[7] = 32;
	ip[8] = 39; ip[9] = 7; ip[10] = 47; ip[11] = 15; ip[12] = 55; ip[13] = 23; ip[14] = 63; ip[15] = 31;
	ip[16] = 38; ip[17] = 6; ip[18] = 46; ip[19] = 14; ip[20] = 54; ip[21] = 22; ip[22] = 62; ip[23] = 30;
	ip[24] = 37; ip[25] = 5; ip[26] = 45; ip[27] = 13; ip[28] = 53; ip[29] = 21; ip[30] = 61; ip[31] = 29;
	ip[32] = 36; ip[33] = 4; ip[34] = 44; ip[35] = 12; ip[36] = 52; ip[37] = 20; ip[38] = 60; ip[39] = 28;
	ip[40] = 35; ip[41] = 3; ip[42] = 43; ip[43] = 11; ip[44] = 51; ip[45] = 19; ip[46] = 59; ip[47] =  27;
	ip[48] = 34; ip[49] = 2; ip[50] = 42; ip[51] = 10; ip[52] = 50; ip[53] = 18; ip[54] = 58; ip[55] = 26;
	ip[56] = 33; ip[57] = 1; ip[58] = 41; ip[59] = 9; ip[60] = 49; ip[61] = 17; ip[62] = 57; ip[63] = 25;

}

void initP(int* p) {
	p[0] = 16; p[1] = 7; p[2] = 20; p[3] = 21;
	p[4] = 29; p[5] = 12; p[6] = 28; p[7] = 17;
	p[8] = 1; p[9] = 15; p[10] = 23; p[11] = 26;
	p[12] = 5; p[13] = 18; p[14] = 31; p[15] = 10;
	p[16] = 2; p[17] = 8; p[18] = 24; p[19] = 14;
	p[20] = 32; p[21] = 27; p[22] = 3; p[23] = 9;
	p[24] = 19; p[25] = 13; p[26] = 30; p[27] = 6;
	p[28] = 22; p[29] = 11; p[30] = 4; p[31] = 25;
}

void initPInvert(int* p) {
	p[0] = 9; p[1] = 17; p[2] = 23; p[3] = 31;
	p[4] = 13; p[5] = 28; p[6] = 2; p[7] = 18;
	p[8] = 24; p[9] = 16; p[10] = 30; p[11] = 6;
	p[12] = 26; p[13] = 20; p[14] = 10; p[15] = 1;
	p[16] = 8; p[17] = 14; p[18] = 25; p[19] = 3;
	p[20] = 4; p[21] = 29; p[22] = 11; p[23] = 19;
	p[24] = 32; p[25] = 12; p[26] = 22; p[27] = 7;
	p[28] = 5; p[29] = 27; p[30] = 15; p[31] = 21;
}

void initExtension(int* e) {
	e[0] = 32; e[1] = 1; e[2] = 2; e[3] = 3; e[4] = 4; e[5] = 5;
	e[6] = 4; e[7] = 5; e[8] = 6; e[9] = 7; e[10] = 8; e[11] = 9;
	e[12] = 8; e[13] = 9; e[14] = 10; e[15] = 11; e[16] = 12; e[17] = 13;
	e[18] = 12; e[19] = 13; e[20] = 14; e[21] = 15; e[22] = 16; e[23] = 17;
	e[24] = 16; e[25] = 17; e[26] = 18; e[27] = 19; e[28] = 20; e[29] = 21;
	e[30] = 20; e[31] = 21; e[32] = 22; e[33] = 23; e[34] = 24; e[35] = 25;
	e[36] = 24; e[37] = 25; e[38] = 26; e[39] = 27; e[40] = 28; e[41] = 29;
	e[42] = 28; e[43] = 29; e[44] = 30; e[45] = 31; e[46] = 32; e[47] = 1;
}

char* processIP(const char* input) {

	if(strlen(input) != 64) {
		printf("Error : Wrong input size in ProcessIP : size %lu and expected 64\n", strlen(input));
		return "";
	}

	//Allocation of the output string
	char* output = malloc(sizeof(char)*65);
	output[64] = '\0';

	//Allocation of the IP array
	int* ip = calloc(64, sizeof(int));
	initIP(ip);

	//Main loop
	//put in the output string each character transformed by the IP
	int i = 0;
	for(i = 0; i < 64; i++) {
		output[i] = input[ip[i]-1];
	}

	//free the IP array and return the output String
	free(ip);
	return output;
}

char* processIPInvert(const char* input) {

	//Allocation of the output string
	char* output = malloc(sizeof(char)*65);
	output[64] = '\0';

	//Allocation of the IP-1 array
	int* ipInvert = calloc(64, sizeof(int));
	initIPInvert(ipInvert);

	//Main loop
	//put in the output string each character transformed by the IP
	int i = 0;
	for(i = 0; i < 64; i++) {
		output[i] = input[ipInvert[i]-1];
	}

	//free the IP array and return the output String
	free(ipInvert);
	return output;
}

char* processP(const char* input) {

	//Allocation of the ouput String
	char* output = malloc(sizeof(char)*33);
	output[32] = '\0';

	//Allocation of the P array
	int* p = calloc(32, sizeof(int));
	initP(p);

	//Main loop
	//put in the output string each character transformed by the P
	int i = 0;
	for(i = 0; i < 32; i++) {
		output[i] = input[p[i]-1];
	}

	//free the P array and return the output String
	free(p);
	return output;
}

char* processPInvert(const char* input) {

	if(strlen(input) != 32) {
		printf("Error : Wrong input size in ProcessIP : size %lu and expected 32\n", strlen(input));
		return "";
	}

	//Allocation of the ouput String
	char* output = malloc(sizeof(char)*33);
	output[32] = '\0';

	//Allocation of the PInvert array
	int* pInvert = calloc(32, sizeof(int));
	initPInvert(pInvert);

	//Main loop
	//put in the output string each character transformed by the PInvert
	int i = 0;
	for(i = 0; i < 32; i++) {
		output[i] = input[pInvert[i]-1];
	}

	//free the PInvert array and return the output String
	free(pInvert);
	return output;
}

char* processExtension(const char* input) {
	if(strlen(input) != 32) {
		printf("Error : wrong input size in porcessExtension : size %lu and expected 32\n", strlen(input));
	}
	//Allocation of the output String
	char* output = malloc(sizeof(char)*49);
	output[48] = '\0';

	//Allocation if the E array
	int* e = calloc(48, sizeof(int));
	initExtension(e);

	//Main loop
	//put in the outptut string the extension of the input syting
	int i = 0;
	for(i = 0; i < 48; i++) {
		output[i] = input[e[i] - 1];
	}

	//free the E array and return the output string
	free(e);
	if(strlen(output) != 48) {
		printf("Error : wrong input size in processExtension : size %lu and expected 48\n", strlen(output));
	}
	return output;
}

char** splitBlocks4bits(const char* input) {
	if(strlen(input) != 32) {
		printf("Error : Wrong  size in input in splitBlocks4bits : size %lu and expected 32\n", strlen(input));
		return NULL;
	}
	char** splitInput= malloc(sizeof(char*) * 8);
	for(int i = 0; i < 8; i++) {
		splitInput[i] = malloc(sizeof(char) * 5);
		splitInput[i][4] = '\0';
		for(int j = 0; j < 4; j++) {
			splitInput[i][j] = input[j + (4*i)];
		}
		if(strlen(splitInput[i]) != 4) {
			printf("Error : Wrong output size in splitBlocks4bits : size %lu expetced 4\n", strlen(splitInput[i]));
			return NULL;
		}
	}
	return splitInput;
}

char** splitBlocks6bits(const char* input) {
	if(strlen(input) != 48) {
		printf("Error : Wrong  size in input in splitBlocks4bits : size %lu and expected 48\n", strlen(input));
		return NULL;
	}
	char** splitInput= malloc(sizeof(char*) * 8);
	for(int i = 0; i < 8; i++) {
		splitInput[i] = malloc(sizeof(char) * 7);
		splitInput[i][6] = '\0';
		for(int j = 0; j < 6; j++) {
			splitInput[i][j] = input[j + (6*i)];
		}
		if(strlen(splitInput[i]) != 6) {
			printf("Error : Wrong output size in splitBlocks4bits : size %lu expetced 6\n", strlen(splitInput[i]));
			return NULL;
		}
	}
	return splitInput;
}

