#ifndef XOR
#define XOR

//Check if the size of input1 and input2 are equal
//return 1 if true and 0 if false
int checkSize(char* input1, char* input2);

//Check if the two symbols are 0 or 1
//return 1 if true, 0 if false
int checkSymbol(char input1, char input2);

//XOR the two input
//return the XOR or an empty String if it's impossible to XOR (wrong symbol or different size)
char* xoring(char* input1, char* input2, int sizeXOR);
#endif