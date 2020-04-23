#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct translateTable {
	char* symbol;
	char** value;
} TRANSTABLE;

TRANSTABLE initTable() {
	//Init memory of the structure
	//TRANSTABLE table = malloc(sizeof(TRANSTABLE));
	TRANSTABLE table;
	table.symbol = malloc(sizeof(char)*16);
	table.value = malloc(sizeof(char*)*16);

	//initialization of sybol field
	strcpy(table.symbol, "0123456789ABCDEF");

	//Initilalization of value field
	table.value[0] = "0000";
	table.value[1] = "0001";
	table.value[2] = "0010";
	table.value[3] = "0011";
	table.value[4] = "0100";
	table.value[5] = "0101";
	table.value[6] = "0110";
	table.value[7] = "0111";
	table.value[8] = "1000";
	table.value[9] = "1001";
	table.value[10] = "1010";
	table.value[11] = "1011";
	table.value[12] = "1100";
	table.value[13] = "1101";
	table.value[14] = "1110";
	table.value[15] = "1111";

	return table;
}

void printTRANSTABLE(TRANSTABLE table) {
	int i = 0;
	for(i = 0; i < 16; i++) {
		printf("%c = %s\n", table.symbol[i], table.value[i]);
	}
}

void freeTRANSTABLE(TRANSTABLE table) {
	free(table.symbol);
	free(table.value);
}

void errorInput() {
	printf("Error : unreadable input\n");
	printf("Your input must contain no other character than 0 1 2 3 4 5 6 7 8 9 A B C D E F\n");
}

char* convert(const char* input) {
	printf("Checkin convert(input)\n");
	TRANSTABLE table = initTable();
	int size = strlen(input);
	char* output = "";

	int i = 0;
	for(i = 0; i < size; i++) {
		switch(input[i]) {
			case '0': 
				strcat(output, table.value[0]);
				break;

			case '1':
				strcat(output, table.value[1]);
				break;

			case '2':
				strcat(output, table.value[2]);
				break;

			case '3':
				strcat(output, table.value[3]);
				break;

			case '4':
				strcat(output, table.value[4]);
				break;

			case '5':
				strcat(output, table.value[5]);
				break;

			case '6':
				strcat(output, table.value[6]);
				break;

			case '7':
				strcat(output, table.value[7]);
				break;

			case '8':
				strcat(output, table.value[8]);
				break;

			case '9':
				strcat(output, table.value[9]);
				break;

			case 'A':
				strcat(output, table.value[10]);
				break;

			case 'B':
				strcat(output, table.value[11]);
				break;

			case 'C':
				strcat(output, table.value[12]);
				break;

			case 'D':
				strcat(output, table.value[13]);
				break;

			case 'E':
				strcat(output, table.value[14]);
				break;

			case 'F':
				strcat(output, table.value[15]);
				break;

			default:
				errorInput();
				freeTRANSTABLE(table);
				return "0";
		}
	}

	return output;
}

int main(int argc, char** argv) {
	const char input[3] = "000";
	printf("%s\n", convert(input));
	exit(EXIT_SUCCESS);
}