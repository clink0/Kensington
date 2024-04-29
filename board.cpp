#include <iostream>
#include <string>
#include "board.h"

//contructor
board::board() 
    :moves() //also create an instance of the move class attached to the board object
{
    //initialize gameboard to all zeros
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 30; j++) 
        {
            gameBoard[i][j] = 0;
        }
    }

    //set initial gameState state
    gameState = playing;
}

//setup of the game
//players take turns placing 1 piece anywhere on the board until each player has placed 15 pieces
void board::initialPhase() 
{
    std::cout << "Red player can begin by placing a piece anywhere on the board." << std::endl;

    //initialize local variables
    int redCount = 0;
    int blueCount = 0;
    int red = 1;
    int blue = 2;

    //loop through until each player has had 15 turns
    while (redCount < 15 || blueCount < 15) 
    {
        //red's turn
        if (redCount < 15) 
        {
            std::cout << "Red Player's Turn (" << redCount + 1 << "/15):" << std::endl;
            placePiece(red, "Red");
            redCount++;
        }

        //blue's turn
        if (blueCount < 15) 
        {
            std::cout << "Blue Player's Turn (" << blueCount + 1 << "/15):" << std::endl;
            placePiece(blue, "Blue");
            blueCount++;
        }
    }
    std::cout << std::endl;
}

//initialPhase() supporting function
//player inputs the location where they would like to place a piece
void board::placePiece(int player, const std::string &color) 
{
    int x, y;
    while (true) 
    {
        std::cout << color << " player - Choose a position (row column): ";
        std::cin >> x >> y;

        //ensure position is a valid space and update gameBoard state
        //check array bounds
        if (!isValidPosition(x, y)) 
        {
            std::cout << "Invalid position. Please choose indices within the allowed range for each row." << std::endl;
        } 
        //check that the location entered is an empty spot
        else if (gameBoard[x][y] != 0) 
        {
            std::cout << "Position is already occupied. Please choose another position." << std::endl;
        } 
        //update gameBoard with new state
        else 
        {
            gameBoard[x][y] = player; 
            break;
        }
    }
}

//check if a space is within the correct array bounds
bool board::isValidPosition(int x, int y) const 
{
    if (x < 0 || x >= 4) 
        return false;

    const int columnLimits[4] = {6, 12, 24, 30};
    return y >= 0 && y < columnLimits[x];
}

//main game phase
void board::play()
{
    //check the state of gameState
    while (gameState == playing)
    {
        //red's turn
        redMoves();      
        //check if red won  
        if (checkRedDub()) 
        {
            gameState = redWon;
            break;
        }
        //if red won leave the while loop
        if (isGameOver()) break;

        //blue's turn
        blueMoves();
        //check if blue won and update gameState
        if (checkBlueDub())
        {
            gameState = blueWon;
            break;
        }
        //if blue won leave the while loop
        if (isGameOver()) break;
    }
    endGame(); //after a win case end game
}

//logic for red's turn
void board::redMoves()
{
    //local variable initialization
    //these will keep track of the piece red is moving
    int x;
    int y;

    std::cout << "Red's turn!" << std::endl;
    std::cout << "Red's pieces are located at: " << std::endl;

    //print the current location of all of red's pieces
    printPieceLocation(1);

    std::cout << std::endl;

    while (true)
    {
        //red player enters coordinates of the piece they would like to move
        std::cout << "Choose a piece to move" << std::endl;
        std::cin >> x >> y;

        //check that the location entered has a red piece on it
        if (gameBoard[x][y] == 1)
        {
            //local variable initialization
            //these will keep track of where red wants to move their piece
            int a;
            int b;
            
            while (true)
            {
                //print out the possible moves red can make from this position
                //red enters the coordinates they would like to move their piece onto
                std::cout << "Red can move to: " << "(" << move[x][y][0][0] << " " << move[x][y][1][0] << ")" << "(" << move[x][y][0][1] << " " << move[x][y][1][1] << ")" << "(" << move[x][y][0][2] << " " << move[x][y][1][2] << ")" << "(" << move[x][y][0][3] << " " << move[x][y][1][3] << ") " << "from (" << x << " " << y << ")" << std::endl;
                std::cout << "Choose a position to move to: " << std::endl;
                std::cin >> a >> b;

                //check that the location entered matches the possible moves
                if (!checkMove(x, y, a, b))
                {
                    std::cout << "Invalid position, please choose a position from the list." << std::endl;
                }
                //check that the location entered is an empty spot
                else if (gameBoard[a][b] != 0)
                {
                    std::cout << "Position is already occupied. Please choose another position." << std::endl;
                } 
                //update new position with a red piece
                //revert old position to an empty space
                else 
                {
                    gameBoard[a][b] = 1;
                    gameBoard[x][y] = 0;
                    break;
                }
            }
            break;
        }
    }

    //check if red has created a double mill or a mill
    if (checkRedMill() == 2)
    {
        //in the case of a double mill
        //move two of blue's pieces to any empty space
        millMove(1);
        millMove(1);
    } 
    else if (checkRedMill() == 1)
    {
        //in the case of a mill
        //move one of blue's pieces to any empty space
        millMove(1);
    }
}

//logic for blue's turn
void board::blueMoves()
{
    //local variable initialization
    //these will keep track of the piece blue is moving
    int x;
    int y;

    std::cout << "Blue's turn!" << std::endl;
    std::cout << "Blue's pieces are located at: " << std::endl;

    //print the current location of all of blue's pieces
    printPieceLocation(2);

    std::cout << std::endl;

    while (true)
    {
        //blue player enters coordinates of the piece they would like to move
        std::cout << "Choose a piece to move" << std::endl;
        std::cin >> x >> y;

        //check that the location entered has a blue piece on it
        if (gameBoard[x][y] == 2)
        {
            //local variable initialization
            //these will keep track of where blue wants to move their piece
            int a;
            int b;
            
            while (true)
            {
                //print out the possible moves blue can make from this position
                //blue enters the coordinates they would like to move their piece onto
                std::cout << "Blue can move to: " << "(" << move[x][y][0][0] << " " << move[x][y][1][0] << ")" << "(" << move[x][y][0][1] << " " << move[x][y][1][1] << ")" << "(" << move[x][y][0][2] << " " << move[x][y][1][2] << ")" << "(" << move[x][y][0][3] << " " << move[x][y][1][3] << ") " << "from (" << x << " " << y << ")" << std::endl;
                std::cout << "Choose a position to move to: " << std::endl;
                std::cin >> a >> b;

                //check that the location entered matches the possible moves
                if (!checkMove(x, y, a, b))
                {
                    std::cout << "Invalid position, please choose a position from the list." << std::endl;
                }
                //check that the location entered is an empty spot
                else if (gameBoard[a][b] != 0)
                {
                    std::cout << "Position is already occupied. Please choose another position." << std::endl;
                } 
                //update new position with a blue piece
                //revert old position to an empty space
                else 
                {
                    gameBoard[a][b] = 2;
                    gameBoard[x][y] = 0;
                    break;
                }
            }
            break;
        }
    }

    //check if blue has created a double mill or a mill
    if (checkBlueMill() == 2)
    {
        //in the case of a double mill
        //move two of red's pieces to any empty space
        millMove(2);
        millMove(2);
    } 
    else if (checkBlueMill() == 1)
    {
        //in the case of a mill
        //move one of red's pieces to any empty space
        millMove(2);
    }
}

//loop through gameBoard array and print the location of all of a certain color's pieces
void board::printPieceLocation(int color) const
{
    //define the limits of the array columns
    static const int columnLimits[] = {6, 12, 24, 30};

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < columnLimits[i]; j++) 
        {
            if(gameBoard[i][j] == color)
                std::cout << "(" << i << " " << j << ")";
        }
    }
}

//check if a requested move matches a predefined array of possible moves
//x0 is the x component of the location of the piece to be moved
//y0 is the y component of the location of the piece to be moved
//x1 is the x component of the location where the piece is being moved
//y1 is the y component of the location where the piece is being moved
bool board::checkMove(int x0, int y0, int x1, int y1)
{
    if ((move[x0][y0][0][0] == x1 && move[x0][y0][1][0] == y1 ) || (move[x0][y0][0][1] == x1 && move[x0][y0][1][1] == y1) || (move[x0][y0][0][2] == x1 && move[x0][y0][1][2] == y1) || (move[x0][y0][0][3] == x1 && move[x0][y0][1][3] == y1))
        return true;
    else
        return false;
}

//logic to move pieces when a mill happens
void board::millMove(int color)
{
    //local variable initialization
    int x, y, a, b, opposingColor;

    //dynamically assign opposingColor
    if (color == 1)
    {
        opposingColor = 2;
    }
    else
    {
        opposingColor = 1;
    }

    while (true)
    {
        //print location of opponents pieces that you can move
        std::cout << "You got a mill! Now you can choose any of your opponents pieces to move to any empty space." << std::endl;
        std::cout << "Your opponents pieces are located at: " << std::endl;
        printPieceLocation(opposingColor); 

        //enter the location of your opponents piece you would like to move       
        std::cout << std::endl << "Choose one of your opponents pieces (row column): " << std::endl;
        std::cin >> x >> y;

        //check that the location entered is occupied by an opponent's piece
        if (gameBoard[x][y] == opposingColor)
        {
            while (true)
            {
                //enter the location you would like to move opponent's piece to
                std::cout << "Where would you like to move this piece to: " << std::endl;
                std::cin >> a >> b;

                //check array bounds
                if(!isValidPosition(a, b))
                {
                    std::cout << "Invalid position. Please choose indices within the allowed range for each row." << std::endl;
                }
                //check that the location entered is an empty space
                else if(gameBoard[a][b] != 0)
                {
                    std:: cout << "Position is already occupied. Please choose another position." << std::endl;
                } 
                //update new position with the correct color piece
                //revert old position to an empty space
                else
                {
                    gameBoard[a][b] = color;
                    gameBoard[x][y] = 0;                
                    break;
                }
            }
            break;
        }
    }
}

//print a message for the winner and exit the play loop
void board::endGame() {
    switch (gameState) {
        case redWon:
            std::cout << "Red player has won!" << std::endl;
            break;
        case blueWon:
            std::cout << "Blue player has won!" << std::endl;
            break;
        default:
            std::cout << "The game has ended unexpectedly." << std::endl;
    }
}

//returns true if a win case is detected
bool board::isGameOver()
{
    if (checkRedDub() || checkBlueDub())
        return true;
    else
        return false;
}