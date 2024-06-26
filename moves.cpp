#include "moves.h"

//some positions on the board only allow 3 moves instead of 4
//returns true if a requested move is within the correct index bounds
bool moves::isValidMoveIndex(int x, int y, int i, int j) {
    int xIndex;
    if (x == 3 && (y%5) != 0)
    {
        xIndex = 3;
    } else
    {
        xIndex = 4;
    }

    if (x >= 0 && x < 4 && y >= 0 && y < 30 && i >= 0 && i < 2 && j >= 0 && j < xIndex) 
        return true;
    return false;
}

//predefined array that stores all possible moves that can be made from any spot on the gameBoard array
moves::moves()
{
    move[0][0][0][0] = 0;//x0
    move[0][0][0][1] = 0;//x1
    move[0][0][0][2] = 1;//x2
    move[0][0][0][3] = 1;//x3
    move[0][0][1][0] = 1;//y0
    move[0][0][1][1] = 5;//y1
    move[0][0][1][2] = 11;//y2
    move[0][0][1][3] = 0;//y3

    move[0][1][0][0] = 0;
    move[0][1][0][1] = 0;
    move[0][1][0][2] = 1;
    move[0][1][0][3] = 1;
    move[0][1][1][0] = 0;
    move[0][1][1][1] = 2;
    move[0][1][1][2] = 1;
    move[0][1][1][3] = 2;

    move[0][2][0][0] = 0;
    move[0][2][0][1] = 0;
    move[0][2][0][2] = 1;
    move[0][2][0][3] = 1;
    move[0][2][1][0] = 1;
    move[0][2][1][1] = 3;
    move[0][2][1][2] = 3;
    move[0][2][1][3] = 4;

    move[0][3][0][0] = 0;
    move[0][3][0][1] = 0;
    move[0][3][0][2] = 1;
    move[0][3][0][3] = 1;
    move[0][3][1][0] = 2;
    move[0][3][1][1] = 4;
    move[0][3][1][2] = 5;
    move[0][3][1][3] = 6;

    move[0][4][0][0] = 0;
    move[0][4][0][1] = 0;
    move[0][4][0][2] = 1;
    move[0][4][0][3] = 1;
    move[0][4][1][0] = 3;
    move[0][4][1][1] = 5;
    move[0][4][1][2] = 7;
    move[0][4][1][3] = 8;

    move[0][5][0][0] = 0;
    move[0][5][0][1] = 0;
    move[0][5][0][2] = 1;
    move[0][5][0][3] = 1;
    move[0][5][1][0] = 4;
    move[0][5][1][1] = 0;
    move[0][5][1][2] = 9;
    move[0][5][1][3] = 10;

    move[1][0][0][0] = 0;
    move[1][0][0][1] = 1;
    move[1][0][0][2] = 1;
    move[1][0][0][3] = 2;
    move[1][0][1][0] = 0;
    move[1][0][1][1] = 11;
    move[1][0][1][2] = 1;
    move[1][0][1][3] = 0;

    move[1][1][0][0] = 0;
    move[1][1][0][1] = 1;
    move[1][1][0][2] = 1;
    move[1][1][0][3] = 2;
    move[1][1][1][0] = 1;
    move[1][1][1][1] = 0;
    move[1][1][1][2] = 2;
    move[1][1][1][3] = 1;

    move[1][2][0][0] = 0;
    move[1][2][0][1] = 1;
    move[1][2][0][2] = 1;
    move[1][2][0][3] = 2;
    move[1][2][1][0] = 1;
    move[1][2][1][1] = 1;
    move[1][2][1][2] = 3;
    move[1][2][1][3] = 2;

    move[1][3][0][0] = 0;
    move[1][3][0][1] = 1;
    move[1][3][0][2] = 1;
    move[1][3][0][3] = 2;
    move[1][3][1][0] = 2;
    move[1][3][1][1] = 2;
    move[1][3][1][2] = 4;
    move[1][3][1][3] = 3;

    move[1][4][0][0] = 0;
    move[1][4][0][1] = 1;
    move[1][4][0][2] = 1;
    move[1][4][0][3] = 2;
    move[1][4][1][0] = 2;
    move[1][4][1][1] = 3;
    move[1][4][1][2] = 5;
    move[1][4][1][3] = 4;

    move[1][5][0][0] = 0;
    move[1][5][0][1] = 1;
    move[1][5][0][2] = 1;
    move[1][5][0][3] = 2;
    move[1][5][1][0] = 3;
    move[1][5][1][1] = 4;
    move[1][5][1][2] = 6;
    move[1][5][1][3] = 5;

    move[1][6][0][0] = 0;
    move[1][6][0][1] = 1;
    move[1][6][0][2] = 1;
    move[1][6][0][3] = 2;
    move[1][6][1][0] = 3;
    move[1][6][1][1] = 5;
    move[1][6][1][2] = 7;
    move[1][6][1][3] = 6;

    move[1][7][0][0] = 0;
    move[1][7][0][1] = 1;
    move[1][7][0][2] = 1;
    move[1][7][0][3] = 2;
    move[1][7][1][0] = 4;
    move[1][7][1][1] = 6;
    move[1][7][1][2] = 8;
    move[1][7][1][3] = 7;

    move[1][8][0][0] = 0;
    move[1][8][0][1] = 1;
    move[1][8][0][2] = 1;
    move[1][8][0][3] = 2;
    move[1][8][1][0] = 4;
    move[1][8][1][1] = 7;
    move[1][8][1][2] = 9;
    move[1][8][1][3] = 8;

    move[1][9][0][0] = 0;
    move[1][9][0][1] = 1;
    move[1][9][0][2] = 1;
    move[1][9][0][3] = 2;
    move[1][9][1][0] = 5;
    move[1][9][1][1] = 8;
    move[1][9][1][2] = 10;
    move[1][9][1][3] = 9;

    move[1][10][0][0] = 0;
    move[1][10][0][1] = 1;
    move[1][10][0][2] = 1;
    move[1][10][0][3] = 2;
    move[1][10][1][0] = 5;
    move[1][10][1][1] = 9;
    move[1][10][1][2] = 11;
    move[1][10][1][3] = 10;

    move[1][11][0][0] = 0;
    move[1][11][0][1] = 1;
    move[1][11][0][2] = 1;
    move[1][11][0][3] = 2;
    move[1][11][1][0] = 0;
    move[1][11][1][1] = 10;
    move[1][11][1][2] = 0;
    move[1][11][1][3] = 11;

    move[2][0][0][0] = 1;
    move[2][0][0][1] = 2;
    move[2][0][0][2] = 2;
    move[2][0][0][3] = 3;
    move[2][0][1][0] = 0;
    move[2][0][1][1] = 1;
    move[2][0][1][2] = 23;
    move[2][0][1][3] = 0;

    move[2][1][0][0] = 2;
    move[2][1][0][1] = 2;
    move[2][1][0][2] = 3;
    move[2][1][0][3] = 3;
    move[2][1][1][0] = 0;
    move[2][1][1][1] = 2;
    move[2][1][1][2] = 1;
    move[2][1][1][3] = 2;

    move[2][2][0][0] = 2;
    move[2][2][0][1] = 2;
    move[2][2][0][2] = 3;
    move[2][2][0][3] = 3;
    move[2][2][1][0] = 1;
    move[2][2][1][1] = 3;
    move[2][2][1][2] = 3;
    move[2][2][1][3] = 4;

    move[2][3][0][0] = 1;
    move[2][3][0][1] = 2;
    move[2][3][0][2] = 2;
    move[2][3][0][3] = 3;
    move[2][3][1][0] = 1;
    move[2][3][1][1] = 2;
    move[2][3][1][2] = 4;
    move[2][3][1][3] = 5;

    move[2][4][0][0] = 1;
    move[2][4][0][1] = 2;
    move[2][4][0][2] = 2;
    move[2][4][0][3] = 3;
    move[2][4][1][0] = 2;
    move[2][4][1][1] = 3;
    move[2][4][1][2] = 5;
    move[2][4][1][3] = 5;

    move[2][5][0][0] = 2;
    move[2][5][0][1] = 2;
    move[2][5][0][2] = 3;
    move[2][5][0][3] = 3;
    move[2][5][1][0] = 4;
    move[2][5][1][1] = 6;
    move[2][5][1][2] = 6;
    move[2][5][1][3] = 7;

    move[2][6][0][0] = 2;
    move[2][6][0][1] = 2;
    move[2][6][0][2] = 3;
    move[2][6][0][3] = 3;
    move[2][6][1][0] = 5;
    move[2][6][1][1] = 7;
    move[2][6][1][2] = 8;
    move[2][6][1][3] = 9;

    move[2][7][0][0] = 1;
    move[2][7][0][1] = 2;
    move[2][7][0][2] = 2;
    move[2][7][0][3] = 3;
    move[2][7][1][0] = 3;
    move[2][7][1][1] = 6;
    move[2][7][1][2] = 8;
    move[2][7][1][3] = 10;

    move[2][8][0][0] = 1;
    move[2][8][0][1] = 2;
    move[2][8][0][2] = 2;
    move[2][8][0][3] = 3;
    move[2][8][1][0] = 4;
    move[2][8][1][1] = 7;
    move[2][8][1][2] = 9;
    move[2][8][1][3] = 10;

    move[2][9][0][0] = 2;
    move[2][9][0][1] = 2;
    move[2][9][0][2] = 3;
    move[2][9][0][3] = 3;
    move[2][9][1][0] = 8;
    move[2][9][1][1] = 10;
    move[2][9][1][2] = 11;
    move[2][9][1][3] = 12;

    move[2][10][0][0] = 2;
    move[2][10][0][1] = 2;
    move[2][10][0][2] = 3;
    move[2][10][0][3] = 3;
    move[2][10][1][0] = 9;
    move[2][10][1][1] = 11;
    move[2][10][1][2] = 13;
    move[2][10][1][3] = 14;

    move[2][11][0][0] = 1;
    move[2][11][0][1] = 2;
    move[2][11][0][2] = 2;
    move[2][11][0][3] = 3;
    move[2][11][1][0] = 5;
    move[2][11][1][1] = 10;
    move[2][11][1][2] = 12;
    move[2][11][1][3] = 15;

    move[2][12][0][0] = 1;
    move[2][12][0][1] = 2;
    move[2][12][0][2] = 2;
    move[2][12][0][3] = 3;
    move[2][12][1][0] = 6;
    move[2][12][1][1] = 11;
    move[2][12][1][2] = 13;
    move[2][12][1][3] = 15;

    move[2][13][0][0] = 2;
    move[2][13][0][1] = 2;
    move[2][13][0][2] = 3;
    move[2][13][0][3] = 3;
    move[2][13][1][0] = 12;
    move[2][13][1][1] = 14;
    move[2][13][1][2] = 16;
    move[2][13][1][3] = 17;

    move[2][14][0][0] = 2;
    move[2][14][0][1] = 2;
    move[2][14][0][2] = 3;
    move[2][14][0][3] = 3;
    move[2][14][1][0] = 13;
    move[2][14][1][1] = 15;
    move[2][14][1][2] = 18;
    move[2][14][1][3] = 19;

    move[2][15][0][0] = 1;
    move[2][15][0][1] = 2;
    move[2][15][0][2] = 2;
    move[2][15][0][3] = 3;
    move[2][15][1][0] = 7;
    move[2][15][1][1] = 14;
    move[2][15][1][2] = 16;
    move[2][15][1][3] = 20;

    move[2][16][0][0] = 1;
    move[2][16][0][1] = 2;
    move[2][16][0][2] = 2;
    move[2][16][0][3] = 3;
    move[2][16][1][0] = 8;
    move[2][16][1][1] = 15;
    move[2][16][1][2] = 17;
    move[2][16][1][3] = 20;

    move[2][17][0][0] = 2;
    move[2][17][0][1] = 2;
    move[2][17][0][2] = 3;
    move[2][17][0][3] = 3;
    move[2][17][1][0] = 16;
    move[2][17][1][1] = 18;
    move[2][17][1][2] = 21;
    move[2][17][1][3] = 22;

    move[2][18][0][0] = 2;
    move[2][18][0][1] = 2;
    move[2][18][0][2] = 3;
    move[2][18][0][3] = 3;
    move[2][18][1][0] = 17;
    move[2][18][1][1] = 19;
    move[2][18][1][2] = 23;
    move[2][18][1][3] = 24;

    move[2][19][0][0] = 1;
    move[2][19][0][1] = 2;
    move[2][19][0][2] = 2;
    move[2][19][0][3] = 3;
    move[2][19][1][0] = 9;
    move[2][19][1][1] = 18;
    move[2][19][1][2] = 20;
    move[2][19][1][3] = 25;

    move[2][20][0][0] = 1;
    move[2][20][0][1] = 2;
    move[2][20][0][2] = 2;
    move[2][20][0][3] = 3;
    move[2][20][1][0] = 10;
    move[2][20][1][1] = 19;
    move[2][20][1][2] = 21;
    move[2][20][1][3] = 25;

    move[2][21][0][0] = 2;
    move[2][21][0][1] = 2;
    move[2][21][0][2] = 3;
    move[2][21][0][3] = 3;
    move[2][21][1][0] = 20;
    move[2][21][1][1] = 22;
    move[2][21][1][2] = 26;
    move[2][21][1][3] = 27;

    move[2][22][0][0] = 2;
    move[2][22][0][1] = 2;
    move[2][22][0][2] = 3;
    move[2][22][0][3] = 3;
    move[2][22][1][0] = 21;
    move[2][22][1][1] = 23;
    move[2][22][1][2] = 28;
    move[2][22][1][3] = 29;

    move[2][23][0][0] = 1;
    move[2][23][0][1] = 2;
    move[2][23][0][2] = 2;
    move[2][23][0][3] = 3;
    move[2][23][1][0] = 11;
    move[2][23][1][1] = 22;
    move[2][23][1][2] = 0;
    move[2][23][1][3] = 0;

    move[3][0][0][0] = 2;
    move[3][0][0][1] = 2;
    move[3][0][0][2] = 3;
    move[3][0][0][3] = 3;
    move[3][0][1][0] = 23;
    move[3][0][1][1] = 0;
    move[3][0][1][2] = 29;
    move[3][0][1][3] = 1;

    move[3][1][0][0] = 2;
    move[3][1][0][1] = 3;
    move[3][1][0][2] = 3;
    move[3][1][1][0] = 1;
    move[3][1][1][1] = 0;
    move[3][1][1][2] = 2;

    move[3][2][0][0] = 2;
    move[3][2][0][1] = 3;
    move[3][2][0][2] = 3;
    move[3][2][1][0] = 1;
    move[3][2][1][1] = 1;
    move[3][2][1][2] = 3;

    move[3][3][0][0] = 2;
    move[3][3][0][1] = 3;
    move[3][3][0][2] = 3;
    move[3][3][1][0] = 2;
    move[3][3][1][1] = 2;
    move[3][3][1][2] = 3;

    move[3][4][0][0] = 2;
    move[3][4][0][1] = 3;
    move[3][4][0][2] = 3;
    move[3][4][1][0] = 2;
    move[3][4][1][1] = 3;
    move[3][4][1][2] = 5;

    move[3][5][0][0] = 2;
    move[3][5][0][1] = 2;
    move[3][5][0][2] = 3;
    move[3][5][0][3] = 3;
    move[3][5][1][0] = 3;
    move[3][5][1][1] = 4;
    move[3][5][1][2] = 4;
    move[3][5][1][3] = 6;

    move[3][6][0][0] = 2;
    move[3][6][0][1] = 3;
    move[3][6][0][2] = 3;
    move[3][6][1][0] = 5;
    move[3][6][1][1] = 5;
    move[3][6][1][2] = 7;

    move[3][7][0][0] = 2;
    move[3][7][0][1] = 3;
    move[3][7][0][2] = 3;
    move[3][7][1][0] = 5;
    move[3][7][1][1] = 6;
    move[3][7][1][2] = 8;

    move[3][8][0][0] = 2;
    move[3][8][0][1] = 3;
    move[3][8][0][2] = 3;
    move[3][8][1][0] = 6;
    move[3][8][1][1] = 7;
    move[3][8][1][2] = 9;

    move[3][9][0][0] = 2;
    move[3][9][0][1] = 3;
    move[3][9][0][2] = 3;
    move[3][9][1][0] = 6;
    move[3][9][1][1] = 8;
    move[3][9][1][2] = 10;

    move[3][10][0][0] = 2;
    move[3][10][0][1] = 2;
    move[3][10][0][2] = 3;
    move[3][10][0][3] = 3;
    move[3][10][1][0] = 7;
    move[3][10][1][1] = 8;
    move[3][10][1][2] = 9;
    move[3][10][1][3] = 11;

    move[3][11][0][0] = 2;
    move[3][11][0][1] = 3;
    move[3][11][0][2] = 3;
    move[3][11][1][0] = 9;
    move[3][11][1][1] = 10;
    move[3][11][1][2] = 11;

    move[3][12][0][0] = 2;
    move[3][12][0][1] = 3;
    move[3][12][0][2] = 3;
    move[3][12][1][0] = 9;
    move[3][12][1][1] = 11;
    move[3][12][1][2] = 13;

    move[3][13][0][0] = 2;
    move[3][13][0][1] = 3;
    move[3][13][0][2] = 3;
    move[3][13][1][0] = 10;
    move[3][13][1][1] = 12;
    move[3][13][1][2] = 14;

    move[3][14][0][0] = 2;
    move[3][14][0][1] = 3;
    move[3][14][0][2] = 3;
    move[3][14][1][0] = 10;
    move[3][14][1][1] = 13;
    move[3][14][1][2] = 15;

    move[3][15][0][0] = 2;
    move[3][15][0][1] = 2;
    move[3][15][0][2] = 3;
    move[3][15][0][3] = 3;
    move[3][15][1][0] = 11;
    move[3][15][1][1] = 12;
    move[3][15][1][2] = 14;
    move[3][15][1][3] = 16;

    move[3][16][0][0] = 2;
    move[3][16][0][1] = 3;
    move[3][16][0][2] = 3;
    move[3][16][1][0] = 13;
    move[3][16][1][1] = 15;
    move[3][16][1][2] = 17;

    move[3][17][0][0] = 2;
    move[3][17][0][1] = 3;
    move[3][17][0][2] = 3;
    move[3][17][1][0] = 13;
    move[3][17][1][1] = 16;
    move[3][17][1][2] = 18;

    move[3][18][0][0] = 2;
    move[3][18][0][1] = 3;
    move[3][18][0][2] = 3;
    move[3][18][1][0] = 14;
    move[3][18][1][1] = 17;
    move[3][18][1][2] = 19;

    move[3][19][0][0] = 2;
    move[3][19][0][1] = 3;
    move[3][19][0][2] = 3;
    move[3][19][1][0] = 14;
    move[3][19][1][1] = 18;
    move[3][19][1][2] = 20;

    move[3][20][0][0] = 2;
    move[3][20][0][1] = 2;
    move[3][20][0][2] = 3;
    move[3][20][0][3] = 3;
    move[3][20][1][0] = 15;
    move[3][20][1][1] = 16;
    move[3][20][1][2] = 19;
    move[3][20][1][3] = 21;

    move[3][21][0][0] = 2;
    move[3][21][0][1] = 3;
    move[3][21][0][2] = 3;
    move[3][21][1][0] = 17;
    move[3][21][1][1] = 20;
    move[3][21][1][2] = 22;

    move[3][22][0][0] = 2;
    move[3][22][0][1] = 3;
    move[3][22][0][2] = 3;
    move[3][22][1][0] = 17;
    move[3][22][1][1] = 21;
    move[3][22][1][2] = 23;

    move[3][23][0][0] = 2;
    move[3][23][0][1] = 3;
    move[3][23][0][2] = 3;
    move[3][23][1][0] = 18;
    move[3][23][1][1] = 22;
    move[3][23][1][2] = 24;

    move[3][24][0][0] = 2;
    move[3][24][0][1] = 3;
    move[3][24][0][2] = 3;
    move[3][24][1][0] = 18;
    move[3][24][1][1] = 23;
    move[3][24][1][2] = 25;

    move[3][25][0][0] = 2;
    move[3][25][0][1] = 2;
    move[3][25][0][2] = 3;
    move[3][25][0][3] = 3;
    move[3][25][1][0] = 19;
    move[3][25][1][1] = 20;
    move[3][25][1][2] = 24;
    move[3][25][1][3] = 26;

    move[3][26][0][0] = 2;
    move[3][26][0][1] = 3;
    move[3][26][0][2] = 3;
    move[3][26][1][0] = 21;
    move[3][26][1][1] = 25;
    move[3][26][1][2] = 27;

    move[3][27][0][0] = 2;
    move[3][27][0][1] = 3;
    move[3][27][0][2] = 3;
    move[3][27][1][0] = 21;
    move[3][27][1][1] = 26;
    move[3][27][1][2] = 28;

    move[3][28][0][0] = 2;
    move[3][28][0][1] = 3;
    move[3][28][0][2] = 3;
    move[3][28][1][0] = 22;
    move[3][28][1][1] = 27;
    move[3][28][1][2] = 29;

    move[3][29][0][0] = 2;
    move[3][29][0][1] = 3;
    move[3][29][0][2] = 3;
    move[3][29][1][0] = 22;
    move[3][29][1][1] = 28;
    move[3][29][1][2] = 0;
}