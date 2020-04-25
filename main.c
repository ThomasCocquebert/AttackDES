#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "hexaconverter.h"
#include "permutation.h"

int main(int argc, char** argv) {

	//Conversion of the input hexadecimal string in binary
	const char* input = argv[1];
	printf("Input : %s\n", input);
	char* output = convert(input);

	if(!strncmp(output,"",(strlen(input)*4))) {
		exit(EXIT_FAILURE);
	}

	printf("Input in binary : %s\n", output);

	//IP, IP-1 transformations and XOR between then
	if(strlen(output) != 64) {
		printf("Your binary representation must be an 64 bits number\n");
		free(output);
		exit(EXIT_FAILURE);
	}

	char* ip = processIP(output);
	printf("Binary after IP : %s\n", ip);

	char* ipInvert = processIPInvert(ip);
	printf("Binary after IP-1 : %s\n", ipInvert);

	char* xor = malloc(sizeof(char)*65);
	xor[64] = '\0';
	int i = 0;

	for(i = 0; i < 64; i++) {
		xor[i] = (input[i] == ipInvert[i]) ? '0' : '1';
	}
	printf("Result of the XOR between IP(input) and IP-1(input) : %s\n", xor);

	free(output);
	free(ip);
	free(ipInvert);
	free(xor);
	exit(EXIT_SUCCESS);
}