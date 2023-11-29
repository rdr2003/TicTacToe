# TicTacToe
Rajarshi Das Rachi(222-115-214)

Console-based Tic Tac Toe game where two players take turns to mark X or O.

Project Description:

The provided code is a console-based implementation of the classic Tic Tac Toe game in C++. The game is played on a 3x3 grid, and two players, represented by 'X' and 'O,' take turns marking cells on the grid. The game continues until one player achieves a winning configuration or until all cells are filled, resulting in a draw.

How to build and run the project:

Game Initialization:
The project begins with a 3x3 array named board for the virtual battleground. The variable turn tracks the current player ('X' or 'O'), while the boolean draw awaits the verdict of a potential draw.
Displaying the Game Board:
The elegance of the game unfolds through the display_board function, which prints the current state of the Tic Tac Toe board, allowing players to strategize within the 3x3 grid.
Player Turns:
The pivotal player_turn function orchestrates each player's move. Prompting input for a position (1-9), it validates the choice and places the player's symbol on the board. An informative message guides the player in case of an invalid move.
Determining Game Over:
The heart of the program lies in the game_over function, checking for victory conditions or a draw by examining rows, columns, and diagonals.
Main Loop:
The main function initiates the game loop, displaying the board and invoking the player_turn function as long as the game is in progress.
Concluding the Game:
Upon loop cessation, the program unveils the outcome. If not a draw, it announces the winning player; otherwise, a message conveys the harmonious result.
Conclusion:
In summary, this C++ program offers an immersive implementation of Tic Tac Toe in a console environment, with a concise yet engaging codebase. Running this program invites users to partake in a digital rendition of the timeless contest, combining strategic depth with nostalgic charm.

Additional Instructions or Dependencies:

The provided C++ Tic Tac Toe implementation does not have additional dependencies beyond a standard C++ compiler.
