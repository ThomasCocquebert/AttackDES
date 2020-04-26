#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(int argc, char** argv) {
	char input1[65];
	char input2[65];

	printf("Enter your first binary number\n");
	scanf("%s", input1);

	printf("Enter your second binary number\n");
	scanf("%s", input2);

	if(strlen(input1) != strlen(input2)) {
		printf("Your numbers must have the same number of bits\n");
		exit(EXIT_FAILURE);
	}

	char* xor = malloc(sizeof(char)*strlen(input1)+1);
	xor[strlen(input1)] = '\0';

	for(int i = 0; i < strlen(input1); i++) {
		if(input1[i] != '0' || input1[i] != '1' || input2[i] != '0' || input2[i] != '1') {
			printf("Your numbers must contain only 0 or 1\n");
			exit(EXIT_FAILURE);
		}
		xor[i] = (input1[i] == input2[i]) ? '0' : '1';
	}

	printf("XOR of the two numbers :\n");
	printf("%s\n", xor);

	exit(EXIT_SUCCESS);
}