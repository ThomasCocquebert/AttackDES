#ifndef PERMUTATION
#define PERMUTATION

//Init the initial permutation array in the DES
void initIP(int* ip);

//Init the invert of initial permutation array in the DES
void initIPInvert(int* ip);

//Process the initial permutation on the input string by the IP array
//return the string trasnformed by the permutation
char* processIP(const char* input);

//Process the invert of initial permutation on the input string by the IP-1 array
//return the string trasnformed by the permutation
char* processIPInvert(const char* input);


#endif