# CplusplusClassesTicTacToe

This program is a tictactoe game made in C++ using classes. The game uses a class called GameState to keep track of 
- whose turn it is, 
- if the move is valid or not, 
- where the player wants to place
- if any of the players won 
- or if the game ended (at a tie or not). 

The game also displays all this info at the end of each move. 

The game is mainly controlled in the playMove function, which gets sent the class object GameState by reference and makes changes to the object as the game progresses. 

The game determines the winCode using the following algorithm: 

0 :            No win

1  :           Row 0 of the grid, cell (0,0) to cell (0,2)

2   :          Row 1 of the grid, cell (1,0) to cell (1,2)
      
3    :         Row 2 of the grid, cell (2,0) to cell (2,2)

4     :        Column 0 of the grid, cell (0,0) to cell (2,0)

5      :       Column 1 of the grid, cell (0,1) to cell (2,1)

6       :      Column 2 of the grid, cell (0,2) to cell (2,2)

7        :     Left to right diagonal, cell (0,0) to cell (2,2)

8         :    Right to left diagonal, cell (2,0) to cell (0,2)
