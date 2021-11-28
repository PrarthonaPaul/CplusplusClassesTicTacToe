//
//  playMove.cpp
//  TicTacToe


#include "globals.h"
#include "GameState.h"

void playMove(GameState& game_state) {
    int row = game_state.get_selectedRow(); 
    int col = game_state.get_selectedColumn(); 
    int value = game_state.get_gameBoard(row, col); //this is the value that gets sent to the set_gameBoard function to edit the game board
    bool turn, valid, game_Over; 
    int win_code; 
    turn = game_state.get_turn();  
    game_state.set_moveValid(true); 
    
    if(value == Empty ){

        if(turn){
            game_state.set_gameBoard(row, col, X); 
            game_state.set_turn(false); 
        }
        else{
            game_state.set_gameBoard(row, col, O); 
            game_state.set_turn(true); 
        }
        
        win_code = game_state.get_winCode(); 
        game_Over = game_state.get_gameOver();  
    }
    else
        game_state.set_moveValid(false); 

}
