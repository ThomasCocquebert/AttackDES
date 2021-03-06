#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int checkSize(char* input1, char* input2) {
	if(strlen(input1) != strlen(input2)) {
		return 0;
	}

	if(strlen(input1) != 32 || strlen(input2) != 32) {
		return 0;
	}

	return 1;
}

int checkSymbol(char input1, char input2) {
	if((input1 != '0' && input1 != '1') || (input2 != '0' && input2 != '1')) {
		return 0;
	}

	return 1;
}

char* xoring(char* input1, char* input2, int sizeXOR) {
	/*
	if(!checkSize(input1, input2)) {
		printf("Invalid size : can't XOR\n");
		return "";
	}
	*/

	char* xor = malloc(sizeof(char) * (sizeXOR+1));
	xor[sizeXOR] = '\0';
	strncpy(xor, "", 1);

	for(int i = 0; i < sizeXOR; i++) {
		if(checkSymbol(input1[i], input2[i])) {
			xor[i] = (input1[i] == input2[i]) ? '0' : '1';
		} else {
			printf("Invalid symbol : can't XOR\n");
			free(xor);
			return "";
		}
	}
	return xor;
}