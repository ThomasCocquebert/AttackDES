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

char* processIP(const char* input) {

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



/*
int main(int argc, char** argv) {
	const char* input = argv[1];
	if(strlen(input)!=64) {
		printf("Your input must be a 64 characters string\n");
		exit(EXIT_FAILURE);
	}

	char* ip = processIP(input);
	printf("%s\n", ip);

	char* ipInvert = processIPInvert(ip);
	printf("%s\n", ipInvert);

	char* xor = malloc(sizeof(char)*65);
	xor[64] = '\0';
	int i = 0;

	for(i = 0; i < 64; i++) {
		xor[i] = (input[i] == ipInvert[i]) ? '0' : '1';
	}
	printf("%s\n", xor);

	free(ip);
	free(ipInvert);
	free(xor);
	exit(EXIT_SUCCESS);
}
*/