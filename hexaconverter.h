#ifndef HEXACONVERTER
#define HEXACONVERTER

//Structure of the translation table
//Symbol represent the hexadecimal representation (usefull just for printTRANSTABLE)
//Value is a double dimension array representing the binary number of each hexadecimal number
typedef struct translateTable {
	char symbol[16];
	char value[16][5];
} TRANSTABLE;

//Initializaton of the structure TRANSTABLE
TRANSTABLE initTable();

//Print the translation table
void printTRANSTABLE(TRANSTABLE table);

//Print error messages for unreadable character
void errorInput();

//Convert an hexadecimal input string to his binary representation
//Return the binary representation or a "NULL" string in case of unreadable character in the input
//You must store the return of this function in a variable and make a free() on it before exit the program
char* convert(const char* input);

#endif