#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "sbox.h"

SBOXES initSBOXES() {
	SBOXES boxs;

	//First Sbox
	boxs.tab[0][0][0] = 14; 	boxs.tab[0][0][1] = 0; 		boxs.tab[0][0][2] = 4; 		boxs.tab[0][0][3] = 15;
	boxs.tab[0][1][0] = 4; 		boxs.tab[0][1][1] = 15; 	boxs.tab[0][1][2] = 1; 		boxs.tab[0][1][3] = 12;
	boxs.tab[0][2][0] = 13; 	boxs.tab[0][2][1] = 7; 		boxs.tab[0][2][2] = 14; 	boxs.tab[0][2][3] = 8;
	boxs.tab[0][3][0] = 1; 		boxs.tab[0][3][1] = 4; 		boxs.tab[0][3][2] =8; 		boxs.tab[0][3][3] = 2;
	boxs.tab[0][4][0] = 2; 		boxs.tab[0][4][1] = 14; 	boxs.tab[0][4][2] = 13; 	boxs.tab[0][4][3] = 4;
	boxs.tab[0][5][0] = 15; 	boxs.tab[0][5][1] = 2; 		boxs.tab[0][5][2] = 6; 		boxs.tab[0][5][3] = 9;
	boxs.tab[0][6][0] = 11; 	boxs.tab[0][6][1] = 13; 	boxs.tab[0][6][2] = 2; 		boxs.tab[0][6][3] = 1;
	boxs.tab[0][7][0] = 8; 		boxs.tab[0][7][1] = 1; 		boxs.tab[0][7][2] = 11; 	boxs.tab[0][7][3] = 7;
	boxs.tab[0][8][0] = 3; 		boxs.tab[0][8][1] = 10; 	boxs.tab[0][8][2] = 15; 	boxs.tab[0][8][3] = 5;
	boxs.tab[0][9][0] = 10; 	boxs.tab[0][9][1] = 6; 		boxs.tab[0][9][2] = 12; 	boxs.tab[0][9][3] = 11;
	boxs.tab[0][10][0] = 6; 	boxs.tab[0][10][1] = 12; 	boxs.tab[0][10][2] = 9; 	boxs.tab[0][10][3] = 3;
	boxs.tab[0][11][0] = 12;	boxs.tab[0][11][1] = 11; 	boxs.tab[0][11][2] = 7; 	boxs.tab[0][11][3] = 14;
	boxs.tab[0][12][0] = 5; 	boxs.tab[0][12][1] = 9; 	boxs.tab[0][12][2] = 3; 	boxs.tab[0][12][3] = 10;
	boxs.tab[0][13][0] = 9; 	boxs.tab[0][13][1] = 5; 	boxs.tab[0][13][2] = 10; 	boxs.tab[0][13][3] = 0;
	boxs.tab[0][14][0] = 0; 	boxs.tab[0][14][1] = 3; 	boxs.tab[0][14][2] = 5; 	boxs.tab[0][14][3] = 6;
	boxs.tab[0][15][0] = 7; 	boxs.tab[0][15][1] = 8; 	boxs.tab[0][15][2] = 0; 	boxs.tab[0][15][3] = 13;

	//Second Sbox
	boxs.tab[1][0][0] = 15; 	boxs.tab[1][0][1] = 3; 		boxs.tab[1][0][2] = 0; 		boxs.tab[1][0][3] = 13;
	boxs.tab[1][1][0] = 1; 		boxs.tab[1][1][1] = 13; 	boxs.tab[1][1][2] = 14; 	boxs.tab[1][1][3] = 8;
	boxs.tab[1][2][0] = 8; 		boxs.tab[1][2][1] = 4; 		boxs.tab[1][2][2] = 7; 		boxs.tab[1][2][3] = 10;
	boxs.tab[1][3][0] = 14; 	boxs.tab[1][3][1] = 7; 		boxs.tab[1][3][2] = 11; 	boxs.tab[1][3][3] = 1;
	boxs.tab[1][4][0] = 6; 		boxs.tab[1][4][1] = 15; 	boxs.tab[1][4][2] = 10; 	boxs.tab[1][4][3] = 3;
	boxs.tab[1][5][0] = 11; 	boxs.tab[1][5][1] = 2; 		boxs.tab[1][5][2] = 4; 		boxs.tab[1][5][3] = 15;
	boxs.tab[1][6][0] = 3;		boxs.tab[1][6][1] = 8; 		boxs.tab[1][6][2] = 13; 	boxs.tab[1][6][3] = 4;
	boxs.tab[1][7][0] = 4; 		boxs.tab[1][7][1] = 14; 	boxs.tab[1][7][2] = 1; 		boxs.tab[1][7][3] = 2;
	boxs.tab[1][8][0] = 9; 		boxs.tab[1][8][1] = 12; 	boxs.tab[1][8][2] = 5; 		boxs.tab[1][8][3] = 11;
	boxs.tab[1][9][0] = 7; 		boxs.tab[1][9][1] = 0; 		boxs.tab[1][9][2] = 8; 		boxs.tab[1][9][3] = 6;
	boxs.tab[1][10][0] = 2; 	boxs.tab[1][10][1] = 1; 	boxs.tab[1][10][2] = 12; 	boxs.tab[1][10][3] = 7;
	boxs.tab[1][11][0] = 13; 	boxs.tab[1][11][1] = 10; 	boxs.tab[1][11][2] = 6; 	boxs.tab[1][11][3] = 12;
	boxs.tab[1][12][0] = 12; 	boxs.tab[1][12][1] = 6; 	boxs.tab[1][12][2] = 9; 	boxs.tab[1][12][3] = 0;
	boxs.tab[1][13][0] = 0; 	boxs.tab[1][13][1] = 9; 	boxs.tab[1][13][2] = 3; 	boxs.tab[1][13][3] = 5;
	boxs.tab[1][14][0] = 5; 	boxs.tab[1][14][1] = 11; 	boxs.tab[1][14][2] = 2; 	boxs.tab[1][14][3] = 14;
	boxs.tab[1][15][0] = 10; 	boxs.tab[1][15][1] = 5; 	boxs.tab[1][15][2] = 15; 	boxs.tab[1][15][3] = 9;

	//Thrid Sbox
	boxs.tab[2][0][0] = 10; 		boxs.tab[2][0][1] = 13; 	boxs.tab[2][0][2] = 13; 	boxs.tab[2][0][3] = 1;
	boxs.tab[2][1][0] = 0; 			boxs.tab[2][1][1] = 7; 		boxs.tab[2][1][2] = 6; 		boxs.tab[2][1][3] = 10;
	boxs.tab[2][2][0] = 9; 			boxs.tab[2][2][1] = 0; 		boxs.tab[2][2][2] = 4; 		boxs.tab[2][2][3] = 13;
	boxs.tab[2][3][0] = 14; 		boxs.tab[2][3][1] = 9; 		boxs.tab[2][3][2] = 9; 		boxs.tab[2][3][3] = 0;
	boxs.tab[2][4][0] = 6; 			boxs.tab[2][4][1] = 3; 		boxs.tab[2][4][2] = 8; 		boxs.tab[2][4][3] = 6;
	boxs.tab[2][5][0] = 3; 			boxs.tab[2][5][1] = 4; 		boxs.tab[2][5][2] = 15; 	boxs.tab[2][5][3] = 9;
	boxs.tab[2][6][0] = 15; 		boxs.tab[2][6][1] = 6; 		boxs.tab[2][6][2] = 3; 		boxs.tab[2][6][3] = 8;
	boxs.tab[2][7][0] = 5; 			boxs.tab[2][7][1] = 10; 	boxs.tab[2][7][2] = 0; 		boxs.tab[2][7][3] = 7;
	boxs.tab[2][8][0] = 1; 			boxs.tab[2][8][1] = 2; 		boxs.tab[2][8][2] = 11; 	boxs.tab[2][8][3] = 4;
	boxs.tab[2][9][0] = 13; 		boxs.tab[2][9][1] = 8; 		boxs.tab[2][9][2] = 1; 		boxs.tab[2][9][3] = 15;
	boxs.tab[2][10][0] = 12; 		boxs.tab[2][10][1] = 5; 	boxs.tab[2][10][2] = 2; 	boxs.tab[2][10][3] = 14;
	boxs.tab[2][11][0] = 7;	 		boxs.tab[2][11][1] = 14; 	boxs.tab[2][11][2] = 12; 	boxs.tab[2][11][3] = 3;
	boxs.tab[2][12][0] = 11; 		boxs.tab[2][12][1] = 12; 	boxs.tab[2][12][2] = 5; 	boxs.tab[2][12][3] = 11;
	boxs.tab[2][13][0] = 4; 		boxs.tab[2][13][1] = 11; 	boxs.tab[2][13][2] = 10; 	boxs.tab[2][13][3] = 5;
	boxs.tab[2][14][0] = 2; 		boxs.tab[2][14][1] = 15; 	boxs.tab[2][14][2] = 14; 	boxs.tab[2][14][3] = 2;
	boxs.tab[2][15][0] = 8; 		boxs.tab[2][15][1] = 1; 	boxs.tab[2][15][2] = 7; 	boxs.tab[2][15][3] = 12;

	//Fourth Sbox
	boxs.tab[3][0][0] = 7; 			boxs.tab[3][0][1] = 13; 	boxs.tab[3][0][2] = 10; 	boxs.tab[3][0][3] = 3;
	boxs.tab[3][1][0] = 13; 		boxs.tab[3][1][1] = 8; 		boxs.tab[3][1][2] = 6; 		boxs.tab[3][1][3] = 15;
	boxs.tab[3][2][0] = 14; 		boxs.tab[3][2][1] = 11; 	boxs.tab[3][2][2] = 9; 		boxs.tab[3][2][3] = 0;
	boxs.tab[3][3][0] = 3; 			boxs.tab[3][3][1] = 5; 		boxs.tab[3][3][2] = 0; 		boxs.tab[3][3][3] = 6;
	boxs.tab[3][4][0] = 0; 			boxs.tab[3][4][1] = 6; 		boxs.tab[3][4][2] = 12; 	boxs.tab[3][4][3] = 10;
	boxs.tab[3][5][0] = 6; 			boxs.tab[3][5][1] = 15; 	boxs.tab[3][5][2] = 11; 	boxs.tab[3][5][3] = 1;
	boxs.tab[3][6][0] = 9; 			boxs.tab[3][6][1] = 0; 		boxs.tab[3][6][2] = 7; 		boxs.tab[3][6][3] = 13;
	boxs.tab[3][7][0] = 10; 		boxs.tab[3][7][1] = 3; 		boxs.tab[3][7][2] = 13; 	boxs.tab[3][7][3] = 8;
	boxs.tab[3][8][0] = 1; 			boxs.tab[3][8][1] = 4; 		boxs.tab[3][8][2] = 15; 	boxs.tab[3][8][3] = 9;
	boxs.tab[3][9][0] = 2; 			boxs.tab[3][9][1] = 7; 		boxs.tab[3][9][2] = 1; 		boxs.tab[3][9][3] = 4;
	boxs.tab[3][10][0] = 8; 		boxs.tab[3][10][1] = 2; 	boxs.tab[3][10][2] = 3; 	boxs.tab[3][10][3] = 5;
	boxs.tab[3][11][0] = 5;	 		boxs.tab[3][11][1] = 12; 	boxs.tab[3][11][2] = 14; 	boxs.tab[3][11][3] = 11;
	boxs.tab[3][12][0] = 11; 		boxs.tab[3][12][1] = 1; 	boxs.tab[3][12][2] = 5; 	boxs.tab[3][12][3] = 12;
	boxs.tab[3][13][0] = 12; 		boxs.tab[3][13][1] = 10; 	boxs.tab[3][13][2] = 2; 	boxs.tab[3][13][3] = 7;
	boxs.tab[3][14][0] = 4; 		boxs.tab[3][14][1] = 14; 	boxs.tab[3][14][2] = 8; 	boxs.tab[3][14][3] = 2;
	boxs.tab[3][15][0] = 15; 		boxs.tab[3][15][1] = 9; 	boxs.tab[3][15][2] = 4; 	boxs.tab[3][15][3] = 14;

	//Fifth Sbox
	boxs.tab[4][0][0] = 2; 			boxs.tab[4][0][1] = 14; 	boxs.tab[4][0][2] = 4; 		boxs.tab[4][0][3] = 11;
	boxs.tab[4][1][0] = 12; 		boxs.tab[4][1][1] = 11; 	boxs.tab[4][1][2] = 2; 		boxs.tab[4][1][3] = 8;
	boxs.tab[4][2][0] = 4; 			boxs.tab[4][2][1] = 2; 		boxs.tab[4][2][2] = 1; 		boxs.tab[4][2][3] = 12;
	boxs.tab[4][3][0] = 1; 			boxs.tab[4][3][1] = 12; 	boxs.tab[4][3][2] = 11; 	boxs.tab[4][3][3] = 7;
	boxs.tab[4][4][0] = 7; 			boxs.tab[4][4][1] = 4; 		boxs.tab[4][4][2] = 10; 	boxs.tab[4][4][3] = 1;
	boxs.tab[4][5][0] = 10; 		boxs.tab[4][5][1] = 7; 		boxs.tab[4][5][2] = 13; 	boxs.tab[4][5][3] = 14;
	boxs.tab[4][6][0] = 11; 		boxs.tab[4][6][1] = 13; 	boxs.tab[4][6][2] = 7; 		boxs.tab[4][6][3] = 2;
	boxs.tab[4][7][0] = 6; 			boxs.tab[4][7][1] = 1; 		boxs.tab[4][7][2] = 8; 		boxs.tab[4][7][3] = 13;
	boxs.tab[4][8][0] = 8; 			boxs.tab[4][8][1] = 5; 		boxs.tab[4][8][2] = 15; 	boxs.tab[4][8][3] = 6;
	boxs.tab[4][9][0] = 5; 			boxs.tab[4][9][1] = 0; 		boxs.tab[4][9][2] = 9; 		boxs.tab[4][9][3] = 15;
	boxs.tab[4][10][0] = 3; 		boxs.tab[4][10][1] = 15; 	boxs.tab[4][10][2] = 12; 	boxs.tab[4][10][3] = 0;
	boxs.tab[4][11][0] = 15;	 	boxs.tab[4][11][1] = 10; 	boxs.tab[4][11][2] = 5; 	boxs.tab[4][11][3] = 9;
	boxs.tab[4][12][0] = 13; 		boxs.tab[4][12][1] = 3; 	boxs.tab[4][12][2] = 6; 	boxs.tab[4][12][3] = 10;
	boxs.tab[4][13][0] = 0; 		boxs.tab[4][13][1] = 9; 	boxs.tab[4][13][2] = 3; 	boxs.tab[4][13][3] = 4;
	boxs.tab[4][14][0] = 14; 		boxs.tab[4][14][1] = 8; 	boxs.tab[4][14][2] = 0; 	boxs.tab[4][14][3] = 5;
	boxs.tab[4][15][0] = 9; 		boxs.tab[4][15][1] = 6; 	boxs.tab[4][15][2] = 14; 	boxs.tab[4][15][3] = 3;

	//Sixth Sbox
	boxs.tab[5][0][0] = 12; 		boxs.tab[5][0][1] = 10; 	boxs.tab[5][0][2] = 9; 		boxs.tab[5][0][3] = 4;
	boxs.tab[5][1][0] = 1; 			boxs.tab[5][1][1] = 15; 	boxs.tab[5][1][2] = 14; 	boxs.tab[5][1][3] = 3;
	boxs.tab[5][2][0] = 10; 		boxs.tab[5][2][1] = 4; 		boxs.tab[5][2][2] = 15; 	boxs.tab[5][2][3] = 2;
	boxs.tab[5][3][0] = 15; 		boxs.tab[5][3][1] = 2; 		boxs.tab[5][3][2] = 5; 		boxs.tab[5][3][3] = 12;
	boxs.tab[5][4][0] = 9; 			boxs.tab[5][4][1] = 7; 		boxs.tab[5][4][2] = 2; 		boxs.tab[5][4][3] = 9;
	boxs.tab[5][5][0] = 2; 			boxs.tab[5][5][1] = 12; 	boxs.tab[5][5][2] = 8; 		boxs.tab[5][5][3] = 5;
	boxs.tab[5][6][0] = 6; 			boxs.tab[5][6][1] = 9; 		boxs.tab[5][6][2] = 12; 	boxs.tab[5][6][3] = 15;
	boxs.tab[5][7][0] = 8; 			boxs.tab[5][7][1] = 5; 		boxs.tab[5][7][2] = 3; 		boxs.tab[5][7][3] = 10;
	boxs.tab[5][8][0] = 0; 			boxs.tab[5][8][1] = 6; 		boxs.tab[5][8][2] = 7; 		boxs.tab[5][8][3] = 11;
	boxs.tab[5][9][0] = 13; 		boxs.tab[5][9][1] = 1; 		boxs.tab[5][9][2] = 0; 		boxs.tab[5][9][3] = 14;
	boxs.tab[5][10][0] = 3; 		boxs.tab[5][10][1] = 13; 	boxs.tab[5][10][2] = 4; 	boxs.tab[5][10][3] = 1;
	boxs.tab[5][11][0] = 4;	 		boxs.tab[5][11][1] = 14; 	boxs.tab[5][11][2] = 10; 	boxs.tab[5][11][3] = 7;
	boxs.tab[5][12][0] = 14; 		boxs.tab[5][12][1] = 0; 	boxs.tab[5][12][2] = 1; 	boxs.tab[5][12][3] = 6;
	boxs.tab[5][13][0] = 7; 		boxs.tab[5][13][1] = 11; 	boxs.tab[5][13][2] = 13; 	boxs.tab[5][13][3] = 0;
	boxs.tab[5][14][0] = 5; 		boxs.tab[5][14][1] = 3; 	boxs.tab[5][14][2] = 11; 	boxs.tab[5][14][3] = 8;
	boxs.tab[5][15][0] = 11; 		boxs.tab[5][15][1] = 8; 	boxs.tab[5][15][2] = 6; 	boxs.tab[5][15][3] = 13;

	//Seventh Sbox
	boxs.tab[6][0][0] = 4; 			boxs.tab[6][0][1] = 13; 	boxs.tab[6][0][2] = 1; 		boxs.tab[6][0][3] = 6;
	boxs.tab[6][1][0] = 11; 		boxs.tab[6][1][1] = 0; 		boxs.tab[6][1][2] = 4; 		boxs.tab[6][1][3] = 11;
	boxs.tab[6][2][0] = 2; 			boxs.tab[6][2][1] = 11; 	boxs.tab[6][2][2] = 11; 	boxs.tab[6][2][3] = 13;
	boxs.tab[6][3][0] = 14; 		boxs.tab[6][3][1] = 7; 		boxs.tab[6][3][2] = 13; 	boxs.tab[6][3][3] = 8;
	boxs.tab[6][4][0] = 15; 		boxs.tab[6][4][1] = 4; 		boxs.tab[6][4][2] = 12; 	boxs.tab[6][4][3] = 1;
	boxs.tab[6][5][0] = 0; 			boxs.tab[6][5][1] = 9; 		boxs.tab[6][5][2] = 3; 		boxs.tab[6][5][3] = 4;
	boxs.tab[6][6][0] = 8; 			boxs.tab[6][6][1] = 1; 		boxs.tab[6][6][2] = 7; 		boxs.tab[6][6][3] = 10;
	boxs.tab[6][7][0] = 13; 		boxs.tab[6][7][1] = 10; 	boxs.tab[6][7][2] = 14; 	boxs.tab[6][7][3] = 7;
	boxs.tab[6][8][0] = 3; 			boxs.tab[6][8][1] = 14; 	boxs.tab[6][8][2] = 10; 	boxs.tab[6][8][3] = 9;
	boxs.tab[6][9][0] = 12; 		boxs.tab[6][9][1] = 3; 		boxs.tab[6][9][2] = 15; 	boxs.tab[6][9][3] = 5;
	boxs.tab[6][10][0] = 9; 		boxs.tab[6][10][1] = 5; 	boxs.tab[6][10][2] = 6; 	boxs.tab[6][10][3] = 0;
	boxs.tab[6][11][0] = 7;	 		boxs.tab[6][11][1] = 12; 	boxs.tab[6][11][2] = 8; 	boxs.tab[6][11][3] = 15;
	boxs.tab[6][12][0] = 5; 		boxs.tab[6][12][1] = 2; 	boxs.tab[6][12][2] = 0; 	boxs.tab[6][12][3] = 14;
	boxs.tab[6][13][0] = 10; 		boxs.tab[6][13][1] = 15; 	boxs.tab[6][13][2] = 5; 	boxs.tab[6][13][3] = 2;
	boxs.tab[6][14][0] = 6; 		boxs.tab[6][14][1] = 8; 	boxs.tab[6][14][2] = 9; 	boxs.tab[6][14][3] = 3;
	boxs.tab[6][15][0] = 1; 		boxs.tab[6][15][1] = 6; 	boxs.tab[6][15][2] = 2; 	boxs.tab[6][15][3] = 12;

	//Eighth Sbox
	boxs.tab[7][0][0] = 13; 		boxs.tab[7][0][1] = 1; 		boxs.tab[7][0][2] = 7; 		boxs.tab[7][0][3] = 2;
	boxs.tab[7][1][0] = 12; 		boxs.tab[7][1][1] = 15; 	boxs.tab[7][1][2] = 11; 	boxs.tab[7][1][3] = 1;
	boxs.tab[7][2][0] = 8; 			boxs.tab[7][2][1] = 13; 	boxs.tab[7][2][2] = 4; 		boxs.tab[7][2][3] = 14;
	boxs.tab[7][3][0] = 4; 			boxs.tab[7][3][1] = 8; 		boxs.tab[7][3][2] = 1; 		boxs.tab[7][3][3] = 7;
	boxs.tab[7][4][0] = 6; 			boxs.tab[7][4][1] = 10; 	boxs.tab[7][4][2] = 9; 		boxs.tab[7][4][3] = 4;
	boxs.tab[7][5][0] = 15; 		boxs.tab[7][5][1] = 3; 		boxs.tab[7][5][2] = 12; 	boxs.tab[7][5][3] = 10;
	boxs.tab[7][6][0] = 11; 		boxs.tab[7][6][1] = 7; 		boxs.tab[7][6][2] = 14; 	boxs.tab[7][6][3] = 8;
	boxs.tab[7][7][0] = 1; 			boxs.tab[7][7][1] = 4; 		boxs.tab[7][7][2] = 2; 		boxs.tab[7][7][3] = 13;
	boxs.tab[7][8][0] = 10; 		boxs.tab[7][8][1] = 12; 	boxs.tab[7][8][2] = 0; 		boxs.tab[7][8][3] = 15;
	boxs.tab[7][9][0] = 9; 			boxs.tab[7][9][1] = 5; 		boxs.tab[7][9][2] = 6; 		boxs.tab[7][9][3] = 12;
	boxs.tab[7][10][0] = 3; 		boxs.tab[7][10][1] = 6; 	boxs.tab[7][10][2] = 10; 	boxs.tab[7][10][3] = 9;
	boxs.tab[7][11][0] = 14;	 	boxs.tab[7][11][1] = 11; 	boxs.tab[7][11][2] = 13; 	boxs.tab[7][11][3] = 0;
	boxs.tab[7][12][0] = 5; 		boxs.tab[7][12][1] = 0; 	boxs.tab[7][12][2] = 15; 	boxs.tab[7][12][3] = 3;
	boxs.tab[7][13][0] = 0; 		boxs.tab[7][13][1] = 14; 	boxs.tab[7][13][2] = 3; 	boxs.tab[7][13][3] = 5;
	boxs.tab[7][14][0] = 12; 		boxs.tab[7][14][1] = 9; 	boxs.tab[7][14][2] = 5; 	boxs.tab[7][14][3] = 6;
	boxs.tab[7][15][0] = 7; 		boxs.tab[7][15][1] = 2; 	boxs.tab[7][15][2] = 8; 	boxs.tab[7][15][3] = 11;

	return boxs;

}

char* columneToBinary(int columne) {
	switch(columne) {
		case 0 :
			return "0000";

		case 1 :
			return "0001";

		case 2 :
			return "0010";

		case 3 :
			return "0011";

		case 4 :
			return "0100";

		case 5 :
			return "0101";

		case 6 :
			return "0110";

		case 7 :
			return "0111";

		case 8 :
			return "1000";

		case 9 :
			return "1001";

		case 10 :
			return "1010";

		case 11 :
			return "1011";

		case 12 :
			return "1100";

		case 13 :
			return "1101";

		case 14 :
			return "1110";

		case 15 :
			return "1111";

		default :
			return "erno";
	}
}

char* lineToBinary(int line) {
	switch(line) {
		case 0 :
			return "00";

		case 1 :
			return "01";

		case 2 :
			return "10";

		case 3 :
			return "11";

		default :
			return "-1";
	}
}

void invertSbox(int columne, int line, char* input) {
	//Initialization of string binaryColumne and binaryLine
	char* binaryColumne = columneToBinary(columne);
	char* binaryLine = lineToBinary(line);

	//Test if bianryLine and Binary Columne are valid
	//If not put Error in the input string
	//Else put the right input of the Sbox
	if(!strncmp(binaryLine,"-1", 2) && !strncmp(binaryColumne,"erno", 4)) {

		printf("Error in invertSbox\n");
		printf("Faile to transform into string the line or columne\n");
		strncpy(input, "Error", 5);

	} else {
		char tmp[7];
		tmp[6] = '\0';
		tmp[0] = binaryLine[0];
		for(int i = 0; i < 4; i++) {
			tmp[i+1] = binaryColumne[i];
		}
		tmp[5] = binaryLine[1];

		strncpy(input, tmp, 6);
	}
}

int findInput(char* try1, char* try2, char* try3, char* try4, int numSbox, int sboxOutput) {
	int i = 0;
	SBOXES boxes = initSBOXES();

	//Just a loop searching in each line of a sbox the maching cell
	//And put after that invertSbox function in one of the four strings
	for(i = 0; i < 16; i++) {
		if(boxes.tab[numSbox][i][0] == sboxOutput) {
			invertSbox(i, 0, try1);
		}
	}

	for(i = 0; i < 16; i++) {
		if(boxes.tab[numSbox][i][1] == sboxOutput) {
			invertSbox(i, 1, try2);
		}
	}

	for(i = 0; i < 16; i++) {
		if(boxes.tab[numSbox][i][2] == sboxOutput) {
			invertSbox(i, 2, try3);
		}
	}for(i = 0; i < 16; i++) {
		if(boxes.tab[numSbox][i][3] == sboxOutput) {
			invertSbox(i, 3, try4);
		}
	}

	if(strlen(try1) != 6 || strlen(try2) != 6 || strlen(try3) != 6 || strlen(try4) != 6) {
		printf("Error : Wrong size of output in findInput : size %lu %lu %lu %lu and expected 6\n", strlen(try1), strlen(try2), strlen(try3), strlen(try4));
		return 1;
	}

	return 0;
}

int bits_6_ToInt(const char* input) {
	if(strlen(input) != 4) {
		printf("Error : wrong size in bits_6_ToInt : size %lu and expected 4\n", strlen(input));
		return -1;
	}
	if(strncmp(input, "0000", 5) == 0) {
		return 0;
	} else if(strncmp(input, "0001", 5) == 0) {
		return 1;
	} else if(strncmp(input, "0010", 5) == 0) {
		return 2;
	} else if(strncmp(input, "0011", 5) == 0) {
		return 3;
	} else if(strncmp(input, "0100", 5) == 0) {
		return 4;
	} else if(strncmp(input, "0101", 5) == 0) {
		return 5;
	} else if(strncmp(input, "0110", 5) == 0) {
		return 6;
	} else if(strncmp(input, "0111", 5) == 0) {
		return 7;
	} else if(strncmp(input, "1000", 5) == 0) {
		return 8;
	} else if(strncmp(input, "1001", 5) == 0) {
		return 9;
	} else if(strncmp(input, "1010", 5) == 0) {
		return 10;
	} else if(strncmp(input, "1011", 5) == 0) {
		return 11;
	} else if(strncmp(input, "1100", 5) == 0) {
		return 12;
	} else if(strncmp(input, "1101", 5) == 0) {
		return 13;
	} else if(strncmp(input, "1110", 5) == 0) {
		return 14;
	} else if(strncmp(input, "1111", 5) == 0) {
		return 15;
	} else {
		return -1;
	}
}

void processSbox(const char* input, int numSbox, char* output) {
	SBOXES boxes = initSBOXES();
	char line[3];
	char columne[5];
	line[2] = '\0';
	columne[4] = '\0';

	if(strlen(input) != 6) {
		printf("Error : wrong size in processSbox : %lu and expected 6\n", strlen(input));
	}

	line[0] = input[0];
	for(int i = 0; i < 4; i++) {
		columne[i] = input[i+1];
	}
	line[1] = input[5];

	int x, y;
	x = strtol(line,'\0', 2);
	y = strtol(columne, '\0', 2);
	strncpy(output, columneToBinary(boxes.tab[numSbox][y][x]), 4);
}