#pragma once
#include "moves.h"
#include <string>

class board : public moves
{
public:
    //gameBoard array to store locations of counters
    int gameBoard[4][30];

    //class constructor
    board();

    //graphics
    void update();

    //track the state of win
    enum GameState {playing, redWon, blueWon};
    GameState gameState;

    //run these in main to play game
    void initialPhase();
    void play();   

    //supporting functions for initialPhase()
    void placePiece(int player, const std::string &color);    
    bool isValidPosition(int x, int y) const;
    
    //supporting functions for play()
    void redMoves();
    void blueMoves();    
    bool isGameOver();
    bool checkRedDub();
    bool checkBlueDub();
    void printPieceLocation(int color) const;
    int checkRedMill();
    int checkBlueMill();
    bool checkMove(int x, int y, int a, int b);
    void millMove(int color);    

    //end game
    void endGame();
};