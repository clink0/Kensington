#pragma once

class moves
{
public:
    //member variable to store all possible moves for every position on the board
    int move[4][30][2][4];

    //constructor
    moves();

    //check if an input matches the correct bounds of the array
    bool isValidMoveIndex(int x, int y, int i, int j);
};