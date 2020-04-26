#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "hexaconverter.h"

TRANSTABLE initTable() {
	TRANSTABLE table;

	//initialization of sybol field
	strncpy(table.symbol, "0123456789ABCDEF",16);
	
	//Initilalization of value field
	strncpy(table.value[0],"0000",4);
	strncpy(table.value[1],"0001",4);
	strncpy(table.value[2],"0010",4);
	strncpy(table.value[3],"0011",4);
	strncpy(table.value[4],"0100",4);
	strncpy(table.value[5],"0101",4);
	strncpy(table.value[6],"0110",4);
	strncpy(table.value[7],"0111",4);
	strncpy(table.value[8],"1000",4);
	strncpy(table.value[9],"1001",4);
	strncpy(table.value[10],"1010",4);
	strncpy(table.value[11],"1011",4);
	strncpy(table.value[12],"1100",4);
	strncpy(table.value[13],"1101",4);
	strncpy(table.value[14],"1110",4);
	strncpy(table.value[15],"1111",4);

	return table;
}

void printTRANSTABLE(TRANSTABLE table) {
	int i = 0;
	for(i = 0; i < 16; i++) {
		printf("%c = %s\n", table.symbol[i], table.value[i]);
	}
}

void errorInput() {
	printf("Error : unreadable input\n");
	printf("Your input must contain no other character than 0 1 2 3 4 5 6 7 8 9 A B C D E F\n");
}

char* convert(const char* input) {
	//Initialization of variable
	TRANSTABLE table = initTable();
	int size = strlen(input);
	char* output = malloc(sizeof(char)*(4*size+1));
	strncpy(output, "",(4*size));

	//Main loop
	//Check every cahracter of the input
	//Add there binary representation in the output string
	//Return the output string or "NULL" string in case of unreadable character
	int i = 0;
	for(i = 0; i < size; i++) {
		switch(input[i]) {
			case '0': 
				strncat(output, table.value[0],4);
				break;

			case '1':
				strncat(output, table.value[1],4);
				break;

			case '2':
				strncat(output, table.value[2],4);
				break;

			case '3':
				strncat(output, table.value[3],4);
				break;

			case '4':
				strncat(output, table.value[4],4);
				break;

			case '5':
				strncat(output, table.value[5],4);
				break;

			case '6':
				strncat(output, table.value[6],4);
				break;

			case '7':
				strncat(output, table.value[7],4);
				break;

			case '8':
				strncat(output, table.value[8],4);
				break;

			case '9':
				strncat(output, table.value[9],4);
				break;

			case 'A':
				strncat(output, table.value[10],4);
				break;

			case 'B':
				strncat(output, table.value[11],4);
				break;

			case 'C':
				strncat(output, table.value[12],4);
				break;

			case 'D':
				strncat(output, table.value[13],4);
				break;

			case 'E':
				strncat(output, table.value[14],4);
				break;

			case 'F':
				strncat(output, table.value[15],4);
				break;

			//We print the error messages before return "NULL"
			default:
				errorInput();
				free(output);
				return "";
		}
	}

	//Return the output string and free
	return output;
}

void splitBinary(char* C, char* L, char* R) {

	for (int i = 0; i < 32; i++) {
		L[i] = C[i];
	}

	for (int i = 0; i < 32; i++) {
		R[i] = C[i+32];
	}
	
}