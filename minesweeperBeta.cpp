#include <algorithm>

#include <iostream>

#include <stdlib.h>

using namespace std;

const static int boardSize = 4;

void checkSquareBombs(string board[boardSize][boardSize]) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (i == 0 || i == (boardSize - 1) || j == 0 || j == (boardSize - 1)) {
                if (board[i][j] != "B") {
                    int bombCounter;
                    if (i == 0 && j == 0) {
                        bombCounter = 0;
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == 0 && j == (boardSize - 1) && j != 0) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                        }
                    }

                    if (i == (boardSize - 1) && j == 0 && j != boardSize - 1) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == (boardSize - 1) && j == (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == 0 && j != (boardSize - 1) && j != 0) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == (boardSize - 1) && j != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (j == 0 && i != 0 && i != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (j == (boardSize - 1) && i != 0 && i != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                }
            } else {
                if (board[i][j] != "B") {
                    int bombCounter = 0;

                    if (board[i + 1][j] == "B") {
                        bombCounter++;
                    }
                    if (board[i + 1][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i + 1][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (bombCounter != 0) {
                        board[i][j] = to_string(bombCounter);
                    }
                }
            }
        }
    }
}

void generateBoard(string board[boardSize][boardSize]) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            int randInt = rand() % 10 + 2;
            if ((i + j) % randInt == 0) {
                board[i][j] = "B";
            } else {
                board[i][j] = " ";
            }
        }
    }
    checkSquareBombs(board);
}

int getFreeSquares(string board[boardSize][boardSize]) {
    int freeSquaresCounter = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (board[i][j] != "B") {
                freeSquaresCounter++;
            }
        }
    }
    return freeSquaresCounter;
}

int getNumberOfBombs(string board[boardSize][boardSize]){
    int bombCounter = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (board[i][j] == "B") {
                bombCounter++;
            }
        }
    }
    return bombCounter;    
}

void outputBoard(string board[boardSize][boardSize]) {
    string columnCounter = "    ";
    for (int L = 0; L < boardSize; L++) {
        columnCounter += to_string(L) + " ";
    }
    cout << "Outputting board..." << endl;
    cout << columnCounter << endl;
    for (int i = 0; i < boardSize; i++) {
        cout << i << " | ";
        for (int j = 0; j < boardSize; j++) {
            cout << board[i][j] << ' ';
        }
        cout << "\n";
    }
}

void completeUserInput(string adminBoard[boardSize][boardSize], string board[boardSize][boardSize], int i, int j) {
    int bombCounter = 0;
    for (int L = max(0, i - 1); L <= min(boardSize - 1, i + 1); L++) {
        for (int K = max(0, j - 1); K <= min(boardSize - 1, j + 1); K++) {
            if (L == i && K == j) continue;
            if (adminBoard[L][K] == "B") bombCounter++;
        }
    }
    if (bombCounter != 0) {
        board[i][j] = to_string(bombCounter);
    } else {
        board[i][j] = " ";
    }
}

bool verifyInput(string board[boardSize][boardSize], int line, int column) {
    if (line >= boardSize || line < 0) {
        return false;
    }
    if (column >= boardSize || column < 0) {
        return false;
    }
    if(board[line][column] != "□"){
        return false;
    }
    return true;
}

int main() {
    string gameBoard[boardSize][boardSize];
    string playerBoard[boardSize][boardSize];

    generateBoard(gameBoard);

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            playerBoard[i][j] = "□";
        }
    }
    const static int numberOfBombs = getNumberOfBombs(gameBoard);
    int freeSquares = getFreeSquares(playerBoard);
    int playerMoves = 0;
    do {
        outputBoard(playerBoard);
        int line, column;
        outputBoard(gameBoard);
        cout << "Please input a line and a column: " << endl;
        cin >> line >> column;
        if (verifyInput(playerBoard, line, column)) {
            if (gameBoard[line][column] == "B") {
                cout << "\n \n You lost, you have hit a bomb." << endl;
                return 0;
            } else {
                cout << "Processing move..." << endl;
                playerMoves++;
                completeUserInput(gameBoard, playerBoard, line, column);
                freeSquares--;
            }
        }
    } while (freeSquares != numberOfBombs);
    
    cout << "Congratulations, you won the game! " << endl;
    
    return 0;
}
