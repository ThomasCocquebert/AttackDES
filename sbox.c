#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//struct for one sbox
//just comossed of a 3 dimension Array
//First dimension use for detrmined which sbox use
//Second dimension is for the columne
//Third dimension is for the line
typedef struct sbox {
	int tab[8][16][4];
} SBOX;

SBOX initSBOX() {
	SBOX boxs;

	boxs.tab[0][0][0] = 14; boxs.tab[0][0][1] = 0; boxs.tab[0][0][2] = 4; boxs.tab[0][0][3] = 15;
	boxs.tab[0][1][0] = 4; boxs.tab[0][1][1] = 15; boxs.tab[0][1][2] = 1; boxs.tab[0][1][3] = 12;
	boxs.tab[0][2][0] = 13; boxs.tab[0][2][1] = 7; boxs.tab[0][2][2] = 14; boxs.tab[0][2][3] = 8;
	boxs.tab[0][3][0] = 1; boxs.tab[0][3][1] = 4; boxs.tab[0][3][2] =8; boxs.tab[0][3][3] = 2;
	boxs.tab[0][4][0] = 2; boxs.tab[0][4][1] = 14; boxs.tab[0][4][2] = 13; boxs.tab[0][4][3] = 4;
	boxs.tab[0][5][0] = 15; boxs.tab[0][5][1] = 2; boxs.tab[0][5][2] = 6; boxs.tab[0][5][3] = 9;
	boxs.tab[0][6][0] = 11; boxs.tab[0][6][1] = 13; boxs.tab[0][6][2] = 2; boxs.tab[0][6][3] = 1;
	boxs.tab[0][7][0] = 8; boxs.tab[0][7][1] = 1; boxs.tab[0][7][2] = 11; boxs.tab[0][7][3] = 7;
	boxs.tab[0][8][0] = 3; boxs.tab[0][8][1] = 10; boxs.tab[0][8][2] = 15; boxs.tab[0][8][3] = 5;
	boxs.tab[0][9][0] = 10; boxs.tab[0][9][1] = 6; boxs.tab[0][9][2] = 12; boxs.tab[0][9][3] = 11;
	boxs.tab[0][10][0] = 6; boxs.tab[0][10][1] = 12; boxs.tab[0][10][2] = 9; boxs.tab[0][10][3] = 3;
	boxs.tab[0][11][0] = 12; boxs.tab[0][11][1] = 11; boxs.tab[0][11][2] = 7; boxs.tab[0][11][3] = 14;
	boxs.tab[0][12][0] = 5; boxs.tab[0][12][1] = 9; boxs.tab[0][12][2] = 3; boxs.tab[0][12][3] = 10;
	boxs.tab[0][13][0] = 9; boxs.tab[0][13][1] = 5; boxs.tab[0][13][2] = 10; boxs.tab[0][13][3] = 0;
	boxs.tab[0][14][0] = 0; boxs.tab[0][14][1] = 3; boxs.tab[0][14][2] = 5; boxs.tab[0][14][3] = 6;
	boxs.tab[0][15][0] = 7; boxs.tab[0][15][1] = 8; boxs.tab[0][15][2] = 0; boxs.tab[0][15][3] = 13;

	return boxs;

}

int main(int argc, char** argv) {
	printf("Hellow World !\n");
	exit(EXIT_SUCCESS);
}