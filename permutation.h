#ifndef PERMUTATION
#define PERMUTATION

//Init the initial permutation array in the DES
void initIP(int* ip);

//Init the invert of initial permutation array in the DES
void initIPInvert(int* ip);

//Init the permutation array in the F fucntion of DES
void initP(int* p);

//Init the invert of permutation array in the F fucntion of DES
void initPInvert(int* p);

//Init the extension array in the F fucntion of DES
void initExtension(int* e);

//Process the initial permutation on the input string by the IP array
//return the string trasnformed by the permutation
char* processIP(const char* input);

//Process the invert of initial permutation on the input string by the IP-1 array
//return the string trasnformed by the permutation
char* processIPInvert(const char* input);

//Process the permutation on the input string by the P array
//return the string trasnformed by the permutation
char* processP(const char* input);

//Process the invert of permutation on the input string by the P-1 array
//return the string trasnformed by the permutation
char* processPInvert(const char* input);

//Process the extension on the input string by the E array
//return the string trasnformed by the extension
char* processExtension(const char* input);

char* splitBlocks4bits(const char* input, int numSbox);


#endif