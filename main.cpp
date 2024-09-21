#include<iostream>
#include<string>
using namespace std;

void displayBoard(char board[3][3]);
bool checkWin(char board[3][3]);
bool checkDraw(char board[3][3]);

int main() 
{
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    string p1, p2;
    char playerSymbol = 'X';
    int move;
    bool gameOver = false;

    cout << "Enter name of Player 1: ";
    getline(cin, p1);
    cout << "Enter name of Player 2: ";
    getline(cin, p2);

    cout << p1 << "'s symbol is X" << endl;
    cout << p2 << "'s symbol is O" << endl;

    string currentPlayer = p1;

    while (!gameOver) 
    {
        displayBoard(board);
        cout << endl;
        cout << currentPlayer << " (" << playerSymbol << "), enter a number (1-9): ";
        cin >> move;
        cout << endl;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') 
        {
            board[row][col] = playerSymbol;
            if (checkWin(board)) 
            {
                displayBoard(board);
                cout << currentPlayer << " (" << playerSymbol << ") wins!" << endl;
                gameOver = true;
            }
            else if (checkDraw(board)) 
            {
                displayBoard(board);
                cout << "It's a draw!" << endl;
                gameOver = true;
            }
            else 
            {
                if (currentPlayer == p1) 
                {
                    currentPlayer = p2;
                    playerSymbol = 'O';
                }
                else 
                {
                    currentPlayer = p1;
                    playerSymbol = 'X';
                }
            }
        }
        else 
        {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}

void displayBoard(char board[3][3]) 
{
    cout << "    |     |    " << endl;
    cout << " " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "____|_____|____" << endl;
    cout << "    |     |   " << endl;
    cout << " " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "____|_____|____" << endl;
    cout << "    |     |   " << endl;
    cout << " " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "    |     |    " << endl;

}

bool checkWin(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true;
    }
    return false;
}

bool checkDraw(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] != 'X' && board[i][j] != 'O') 
            {
                return false;
            }
        }
    }
    return true;
}