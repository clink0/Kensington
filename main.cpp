#include <iostream>
#include "board.h"

using namespace std;

int main() 
{
    //create board object called myBoard
    board myBoard;

    //gameplay functions
    myBoard.initialPhase();
    myBoard.play();

    return 0;
}