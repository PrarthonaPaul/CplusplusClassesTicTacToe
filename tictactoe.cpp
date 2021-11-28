//
//  main.cpp
//  TicTacTo


#include <iostream>
#include <string>
#include "globals.h"
#include "GameState.h"

using namespace std;

// Function prototype for playMove
void playMove(GameState&);

// The main function
int main() {

    /**********************************************************************************/
    /* Create an initialized game state object                                        */
    /**********************************************************************************/
    GameState game_state;
    bool turn = false;  //turn is true for X and false for O

    // Read two integers from the user that represent the row and column
    // the player would like to place an X or an O in
    // You can assume there will be no formatting errors in the input

    int row;
    int col;
    while (!game_state.get_gameOver()) {
        cout << "Enter row and column of a grid cell: ";
        cin >> row >> col;
        
        // Check that the read row and column values are valid grid coordinates
        if ( (row < 0) || (row > 2) || (col < 0) || (col > 2) ) {
            cout << "Invalid board coordinates " << row << " " << col << endl << endl;
           continue;
        }
        else{
            game_state.set_selectedRow(row); 
            game_state.set_selectedColumn(col); 
            playMove(game_state); 

            cout << "Selected row " << row << " and column " << col << endl; 
            cout << "Gamestate after playMove: " << endl; 
            cout << "Board: " << endl; 
            for(int i = 0; i < boardSize; i++){
                cout << "   "; 
                for(int j = 0; j < boardSize; ++j){
                    if(game_state.get_gameBoard(i, j) == O)
                        cout << "O "; 
                    else if(game_state.get_gameBoard(i, j) == X)
                        cout << "X "; 
                    else 
                        cout << "B "; 
                }
                cout << endl; 
            }

            if(game_state.get_moveValid())
                cout << "moveValid: true" << endl; 
            else 
                cout << "moveValid: false" << endl; 

            if(game_state.get_gameOver())
                cout << "gameOver: true" << endl; 
            else 
                cout << "gameOver: false" << endl; 

            cout << "winCode: "  << game_state.get_winCode() << endl; 
        }
        // The coordinates are valid; set the selectedRow and selectedColumn
        // members of the game state to the read values
        // Again, the corresponding mutators of GameState must be first
        // implemented before this works
            
      
    }
    return 0;
}

