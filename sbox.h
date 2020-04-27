#ifndef SBOX
#define SBOX

//struct for one sbox
//just comossed of a 3 dimension Array
//First dimension use for detrmined which sbox use
//Second dimension is for the columne
//Third dimension is for the line
typedef struct tabSbox {
	int tab[8][16][4];
} SBOXES;

//Initialisation of sboxes
//Return an SBOXES struct
SBOXES initSBOXES();

//Translate a int value into a string representing his binary value
//return 4 length string or "erno" if error
char* columneToBinary(int columne);

//Translate a int value into a string representing his binary value
//return 2 length string or -1 if error
char* lineToBinary(int line);

//For a columne and line value, store the corect input of the SBOXES in char* input
void invertSbox(int columne, int line, char* input);

//Find the 4 correct input possibilities for the same output
//Take for parameters 4 strings (one for each correct input),
//one int representing in which Sbox search and a string sboxOutput representing the value of the output of sbox
int findInput(char* try1, char* try2, char* try3, char* try4, int numSbox, int sboxOutput);

int bits_6_ToInt(const char* input);

void processSbox(const char* input, int numSbox, char* output);

#endif