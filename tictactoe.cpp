#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
bool draw = false;

void display_board() {
    cout << "Tic Tac Toe\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

void player_turn() {
    int choice;
    cout << "Player " << turn << "'s turn. Enter a position (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = turn;
        turn = (turn == 'X') ? 'O' : 'X';
    } else {
        cout << "Invalid move. Please choose another position.\n";
        player_turn();
    }
}

bool game_over() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] ||
            board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
        board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}

int main() {
    cout << "Tic Tac Toe Game\n";
    while (game_over()) {
        display_board();
        player_turn();
    }

    if (!draw)
        cout << "Player " << ((turn == 'X') ? 'O' : 'X') << " wins!\n";
    else
        cout << "It's a draw!\n";

    return 0;
}

