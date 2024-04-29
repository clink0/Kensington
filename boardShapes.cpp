#include "board.h"

//predefined cases to detect if red has achieved a win
//returns true is red wins
//returns false if red has not won
bool board::checkRedDub()
{
    if (gameBoard[0][0] == 1)
    {
        if (gameBoard[0][1] == 1 && gameBoard[0][2] == 1 && gameBoard[0][3] == 1 && gameBoard[0][4] == 1 && gameBoard[0][5] == 1)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][16] == 1)
    {
        if (gameBoard[2][17] == 1 && gameBoard[2][18] == 1 && gameBoard[2][19] == 1 && gameBoard[1][9] == 1 && gameBoard[1][8] == 1)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][4] == 1)
    {
        if (gameBoard[2][5] == 1 && gameBoard[2][6] == 1 && gameBoard[2][7] == 1 && gameBoard[1][3] == 1 && gameBoard[1][2] == 1)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][0] == 1)
    {
        if (gameBoard[2][1] == 1 && gameBoard[2][2] == 1 && gameBoard[2][3] == 1 && gameBoard[1][1] == 1 && gameBoard[1][0] == 1)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][20] == 1)
    {
        if (gameBoard[2][21] == 1 && gameBoard[2][22] == 1 && gameBoard[2][23] == 1 && gameBoard[1][11] == 1 && gameBoard[1][10] == 1)
            return true;
        else
            return false;
    }
    else
        return false;
}

//predefined cases to detect if blue has achieved a win
//returns true is blue wins
//returns false if blue has not won
bool board::checkBlueDub()
{
    if (gameBoard[0][0] == 2)
    {
        if (gameBoard[0][1] == 2 && gameBoard[0][2] == 2 && gameBoard[0][3] == 2 && gameBoard[0][4] == 2 && gameBoard[0][5] == 2)
            return true;
        else
            return false;

    }
    else if (gameBoard[2][16] == 2)
    {
        if (gameBoard[2][17] == 2 && gameBoard[2][18] == 2 && gameBoard[2][19] == 2 && gameBoard[1][9] == 2 && gameBoard[1][8] == 2)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][4] == 2)
    {
        if (gameBoard[2][5] == 2 && gameBoard[2][6] == 2 && gameBoard[2][7] == 2 && gameBoard[1][3] == 2 && gameBoard[1][2] == 2)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][12] == 2)
    {
        if (gameBoard[2][13] == 2 && gameBoard[2][14] == 2 && gameBoard[2][15] == 2 && gameBoard[1][7] == 2 && gameBoard[1][6] == 2)
            return true;
        else
            return false;
    }
    else if (gameBoard[2][8] == 2)
    {
        if (gameBoard[2][9] == 2 && gameBoard[2][10] == 2 && gameBoard[2][11] == 2 && gameBoard[1][5] == 2 && gameBoard[1][4] == 2)
            return true;
        else
            return false;
    }
    else
        return false;
}

//predefined cases to detect if red has achieved a double mill or mill
//returns 2 in the case of a double mill
//returns 1 in the case of a mill
//return 0 if no mill is detected
int board::checkRedMill()
{
    if (gameBoard[2][22] == 1 && gameBoard[2][23] == 1 && gameBoard[3][29] == 1 && gameBoard[3][0] == 1)
        return 2;
    else if (gameBoard[2][18] == 1 && gameBoard[2][19] == 1 && gameBoard[3][24] == 1 && gameBoard[3][25] == 1)
        return 2;
    else if (gameBoard[2][14] == 1 && gameBoard[2][15] == 1 && gameBoard[3][19] == 1 && gameBoard[3][20] == 1)
        return 2;
    else if (gameBoard[2][10] == 1 && gameBoard[2][11] == 1 && gameBoard[3][14] == 1 && gameBoard[3][15] == 1)
        return 2;
    else if (gameBoard[2][6] == 1 && gameBoard[2][7] == 1 && gameBoard[3][9] == 1 && gameBoard[3][10] == 1)
        return 2;
    else if (gameBoard[2][2] == 1 && gameBoard[2][3] == 1 && gameBoard[3][4] == 1 && gameBoard[3][5] == 1)
        return 2;
    else if (gameBoard[0][0] == 1)
    {
        if (gameBoard[0][1] == 1 && gameBoard[1][0] == 1 && gameBoard[1][1] == 1)
            return 2;
        else if (gameBoard[1][11] == 1 && gameBoard[1][0] == 1)
            return 1;
        else
            return 0;

    }
    else if (gameBoard[0][1] == 1)
    {
        if (gameBoard[0][2] == 1 && gameBoard[1][2] == 1 && gameBoard[1][3] == 1)
            return 2;
        else if (gameBoard[1][1] == 1 && gameBoard[1][2] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[0][2] == 1)
    {
        if (gameBoard[0][3] == 1 && gameBoard[1][4] == 1 && gameBoard[1][5] == 1)
            return 2;
        else if (gameBoard[1][3] == 1 && gameBoard[1][4] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[0][3] == 1)
    {
        if (gameBoard[0][4] == 1 && gameBoard[1][6] == 1 && gameBoard[1][7] == 1)
            return 2;
        else if (gameBoard[1][5] == 1 && gameBoard[1][6] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[0][4] == 1)
    {
        if (gameBoard[0][5] == 1 && gameBoard[1][8] == 1 && gameBoard[1][9] == 1)
            return 2;
        else if (gameBoard[1][7] == 1 && gameBoard[1][8] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[0][5] == 1)
    {
        if (gameBoard[0][0] == 1 && gameBoard[1][10] == 1 && gameBoard[1][11] == 1)
            return 2;
        else if (gameBoard[1][9] == 1 && gameBoard[1][10] == 1)
            return 1;
        else
            return 0;
    }
    //TS 7-12
    else if (gameBoard[2][0] == 1 && gameBoard[2][23] == 1)
    {
        if (gameBoard[1][11] == 1 && gameBoard[1][0] == 1)
            return 2;
        else if (gameBoard[3][0] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][3] == 1 && gameBoard[2][4] == 1)
    {
        if (gameBoard[1][1] == 1 && gameBoard[1][2] == 1)
            return 2;
        else if (gameBoard[3][5] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][7] == 1 && gameBoard[2][8] == 1)
    {
        if (gameBoard[1][3] == 1 && gameBoard[1][4] == 1)
            return 2;
        else if (gameBoard[3][10] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][11] == 1 && gameBoard[2][12] == 1)
    {
        if (gameBoard[1][5] == 1 && gameBoard[1][6] == 1)
            return 2;
        else if (gameBoard[3][15] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][15] == 1 && gameBoard[2][16] == 1)
    {
        if (gameBoard[1][7] == 1 && gameBoard[1][8] == 1)
            return 2;
        else if (gameBoard[3][20] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][19] == 1 && gameBoard[2][20] == 1)
    {
        if (gameBoard[1][9] == 1 && gameBoard[1][10] == 1)
            return 2;
        else if (gameBoard[3][25] == 1)
            return 1;
        else
            return 0;
    }
    //TS 13-24
    else if (gameBoard[2][1] == 1 && gameBoard[3][1] == 1)
    {
        if (gameBoard[2][0] == 1 && gameBoard[3][0] == 1)
            return 2;
        else if (gameBoard[3][2] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][2] == 1 && gameBoard[3][3] == 1)
    {
        if (gameBoard[2][1] == 1 && gameBoard[3][2] == 1)
            return 2;
        else if (gameBoard[3][4] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][5] == 1 && gameBoard[3][6] == 1)
    {
        if (gameBoard[2][4] == 1 && gameBoard[3][5] == 1)
            return 2;
        else if (gameBoard[3][7] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][6] == 1 && gameBoard[3][8] == 1)
    {
        if (gameBoard[2][5] == 1 && gameBoard[3][7] == 1)
            return 2;
        else if (gameBoard[3][9] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][9] == 1 && gameBoard[3][11] == 1)
    {
        if (gameBoard[2][8] == 1 && gameBoard[3][10] == 1)
            return 2;
        else if (gameBoard[3][12] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][10] == 1 && gameBoard[3][13] == 1)
    {
        if (gameBoard[2][9] == 1 && gameBoard[3][12] == 1)
            return 2;
        else if (gameBoard[3][14] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][13] == 1 && gameBoard[3][16] == 1)
    {
        if (gameBoard[2][12] == 1 && gameBoard[3][15] == 1)
            return 2;
        else if (gameBoard[3][17] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][14] == 1 && gameBoard[3][18] == 1)
    {
        if (gameBoard[2][13] == 1 && gameBoard[3][17] == 1)
            return 2;
        else if (gameBoard[3][19] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][17] == 1 && gameBoard[3][21] == 1)
    {
        if (gameBoard[2][16] == 1 && gameBoard[3][20] == 1)
            return 2;
        else if (gameBoard[3][22] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][18] == 1 && gameBoard[3][23] == 1)
    {
        if (gameBoard[2][17] == 1 && gameBoard[3][22] == 1)
            return 2;
        else if (gameBoard[3][24] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][21] == 1 && gameBoard[3][26] == 1)
    {
        if (gameBoard[2][20] == 1 && gameBoard[3][25] == 1)
            return 2;
        else if (gameBoard[3][27] == 1)
            return 1;
        else
            return 0;
    }
    else if (gameBoard[2][22] == 1 && gameBoard[3][28] == 1)
    {
        if (gameBoard[2][21] == 1 && gameBoard[3][27] == 1)
            return 2;
        else if (gameBoard[3][29] == 1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

//predefined cases to detect if blue has achieved a double mill or mill
//returns 2 in the case of a double mill
//returns 1 in the case of a mill
//return 0 if no mill is detected
int board::checkBlueMill()
{
    if (gameBoard[2][22] == 2 && gameBoard[2][23] == 2 && gameBoard[3][29] == 2 && gameBoard[3][0] == 2)
        return 2;
    else if (gameBoard[2][18] == 2 && gameBoard[2][19] == 2 && gameBoard[3][24] == 2 && gameBoard[3][25] == 2)
        return 2;
    else if (gameBoard[2][14] == 2 && gameBoard[2][15] == 2 && gameBoard[3][19] == 2 && gameBoard[3][20] == 2)
        return 2;
    else if (gameBoard[2][10] == 2 && gameBoard[2][11] == 2 && gameBoard[3][14] == 2 && gameBoard[3][15] == 2)
        return 2;
    else if (gameBoard[2][6] == 2 && gameBoard[2][7] == 2 && gameBoard[3][9] == 2 && gameBoard[3][10] == 2)
        return 2;
    else if (gameBoard[2][2] == 2 && gameBoard[2][3] == 2 && gameBoard[3][4] == 2 && gameBoard[3][5] == 2)
        return 2;
    else if (gameBoard[0][0] == 2)
    {
        if (gameBoard[0][1] == 2 && gameBoard[1][0] == 2 && gameBoard[1][1] == 2)
            return 2;
        else if (gameBoard[1][11] == 2 && gameBoard[1][0] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[0][1] == 2)
    {
        if (gameBoard[0][2] == 2 && gameBoard[1][2] == 2 && gameBoard[1][3] == 2)
            return 2;
        else if (gameBoard[1][1] == 2 && gameBoard[1][2] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[0][2] == 2)
    {
        if (gameBoard[0][3] == 2 && gameBoard[1][4] == 2 && gameBoard[1][5] == 2)
            return 2;
        else if (gameBoard[1][3] == 2 && gameBoard[1][4] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[0][3] == 2)
    {
        if (gameBoard[0][4] == 2 && gameBoard[1][6] == 2 && gameBoard[1][7] == 2)
            return 2;
        else if (gameBoard[1][5] == 2 && gameBoard[1][6] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[0][4] == 2)
    {
        if (gameBoard[0][5] == 2 && gameBoard[1][8] == 2 && gameBoard[1][9] == 2)
            return 2;
        else if (gameBoard[1][7] == 2 && gameBoard[1][8] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[0][5] == 2)
    {
        if (gameBoard[0][0] == 2 && gameBoard[1][10] == 2 && gameBoard[1][11] == 2)
            return 2;
        else if (gameBoard[1][9] == 2 && gameBoard[1][10] == 2)
            return 1;
        else 
            return 0;
    }
    //TS 7-12
    else if (gameBoard[2][0] == 2 && gameBoard[2][23] == 2)
    {
        if (gameBoard[1][11] == 2 && gameBoard[1][0] == 2)
            return 2;
        else if (gameBoard[3][0] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][3] == 2 && gameBoard[2][4] == 2)
    {
        if (gameBoard[1][1] == 2 && gameBoard[1][2] == 2)
            return 2;
        else if (gameBoard[3][5] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][7] == 2 && gameBoard[2][8] == 2)
    {
        if (gameBoard[1][3] == 2 && gameBoard[1][4] == 2)
            return 2;
        else if (gameBoard[3][10] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][11] == 2 && gameBoard[2][12] == 2)
    {
        if (gameBoard[1][5] == 2 && gameBoard[1][6] == 2)
            return 2;
        else if (gameBoard[3][15] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][15] == 2 && gameBoard[2][16] == 2)
    {
        if (gameBoard[1][7] == 2 && gameBoard[1][8] == 2)
            return 2;
        else if (gameBoard[3][20] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][19] == 2 && gameBoard[2][20] == 2)
    {
        if (gameBoard[1][9] == 2 && gameBoard[1][10] == 2)
            return 2;
        else if (gameBoard[3][25] == 2)
            return 1;
        else 
            return 0;
    }
    //TS 13-24
    else if (gameBoard[2][1] == 2 && gameBoard[3][1] == 2)
    {
        if (gameBoard[2][0] == 2 && gameBoard[3][0] == 2)
            return 2;
        else if (gameBoard[3][2] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][2] == 2 && gameBoard[3][3] == 2)
    {
        if (gameBoard[2][1] == 2 && gameBoard[3][2] == 2)
            return 2;
        else if (gameBoard[3][4] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][5] == 2 && gameBoard[3][6] == 2)
    {
        if (gameBoard[2][4] == 2 && gameBoard[3][5] == 2)
            return 2;
        else if (gameBoard[3][7] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][6] == 2 && gameBoard[3][8] == 2)
    {
        if (gameBoard[2][5] == 2 && gameBoard[3][7] == 2)
            return 2;
        else if (gameBoard[3][9] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][9] == 2 && gameBoard[3][11] == 2)
    {
        if (gameBoard[2][8] == 2 && gameBoard[3][10] == 2)
            return 2;
        else if (gameBoard[3][12] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][10] == 2 && gameBoard[3][13] == 2)
    {
        if (gameBoard[2][9] == 2 && gameBoard[3][12] == 2)
            return 2;
        else if (gameBoard[3][14] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][13] == 2 && gameBoard[3][16] == 2)
    {
        if (gameBoard[2][12] == 2 && gameBoard[3][15] == 2)
            return 2;
        else if (gameBoard[3][17] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][14] == 2 && gameBoard[3][18] == 2)
    {
        if (gameBoard[2][13] == 2 && gameBoard[3][17] == 2)
            return 2;
        else if (gameBoard[3][19] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][17] == 2 && gameBoard[3][21] == 2)
    {
        if (gameBoard[2][16] == 2 && gameBoard[3][20] == 2)
            return 2;
        else if (gameBoard[3][22] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][18] == 2 && gameBoard[3][23] == 2)
    {
        if (gameBoard[2][17] == 2 && gameBoard[3][22] == 2)
            return 2;
        else if (gameBoard[3][24] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][21] == 2 && gameBoard[3][26] == 2)
    {
        if (gameBoard[2][20] == 2 && gameBoard[3][25] == 2)
            return 2;
        else if (gameBoard[3][27] == 2)
            return 1;
        else 
            return 0;
    }
    else if (gameBoard[2][22] == 2 && gameBoard[3][28] == 2)
    {
        if (gameBoard[2][21] == 2 && gameBoard[3][27] == 2)
            return 2;
        else if (gameBoard[3][29] == 2)
            return 1;
        else 
            return 0;
    }
    else
        return 0;
}