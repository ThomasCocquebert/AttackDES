#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "hexaconverter.h"
#include "permutation.h"
#include "sbox.h"
#include "xor.h"

int main(int argc, char** argv) {

	//Initialization of C and CFalt
	char* C = malloc(sizeof(char) * 17);
	char* CFalt = malloc(sizeof(char) * 17);
	C[16] = '\0';
	CFalt[16] = '\0';
	char tmp[100] = "";
	strncpy(C,"B28CE4DE649B24C7",16);
	strncpy(CFalt,"",16);

	//Copy of enter string in CFalt and checking of the size
	printf("Enter your hexadecimal number :\n");
	scanf("%s", tmp);

	if(strlen(tmp) != 16) {
		printf("You must enter a 16 character hexadecimal number\n");
		free(C);
		free(CFalt);
		exit(EXIT_FAILURE);
	}

	strncpy(CFalt, tmp, 16);

	//Tranformation into Binary of C and CFalt
	//Memory freeid of C and CFalt after transformation
	//printf("---Transformation into binary number---\n");

	char* CBinary = convert(C);
	char* CFaltBinary = convert(CFalt);

	free(C);
	free(CFalt);
	//printf("---Transformation ended---\n");

	//Process IP Transformation
	//Memory freeied of CBinary and CFaltBinary after permutation
	//printf("---Process IP---\n");

	char* CIP = processIP(CBinary);
	char* CFaltIP = processIP(CFaltBinary);

	free(CBinary);
	free(CFaltBinary);

	//printf("---Processing IP ended---\n");

	//Splitting CIP and CFaltIP into L16, R16, L16Falt and R16Falt
	//printf("---Splitting of CBinary and CFaltBinary---\n");

	//Initialization of L16, R16, L16Falt and R16Falt
	printf("\nC = (L16, R16)		C' = (L16', R16')\n");
	char* L16 = malloc(sizeof(char) * 33);
	L16[32] = '\0';
	char* R16 = malloc(sizeof(char) * 33);
	R16[32] = '\0';
	char* L16Falt = malloc(sizeof(char) * 33);
	L16Falt[32] = '\0';
	char* R16Falt = malloc(sizeof(char) * 33);
	R16Falt[32] = '\0';
	strncpy(L16, "", 32);
	strncpy(R16, "", 32);
	strncpy(L16Falt, "", 32);
	strncpy(R16Falt, "", 32);

	splitBinary(CIP, L16, R16);
	splitBinary(CFaltIP, L16Falt, R16Falt);

	free(CIP);
	free(CFaltIP);

	printf("L16 : %s\n", L16);
	printf("R16 : %s\n", R16);
	printf("L16' : %s\n", L16Falt);
	printf("R16' : %s\n", R16Falt);
	//printf("---Splitting ended---\n");

	//printf("---XORing R16 and R16'\n");

	char*  xorR16 = xoring(R16, R16Falt, 32);
	printf("XOR R16 R16' : %s\n", xorR16);

	char* xorL16 = xoring(L16, L16Falt, 32);
	printf("XOR L16 L16' : %s\n", xorL16);

	//printf("---XORing ended---\n");

	free(xorR16);
	free(xorL16);
	free(L16);
	free(R16);
	free(L16Falt);
	free(R16Falt);
	exit(EXIT_SUCCESS);
}