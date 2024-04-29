#pragma once

class moves
{
public:
    int move[4][30][2][4];

    moves();
    bool isValidMoveIndex(int x, int y, int i, int j);
};