// TickTackToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkWin() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else
        return 0;
}
void board() {


    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
int main(int argc, char** argv) {
    int player = 1;
    int i = 0;
    int x = 0;
    int choice;
    char mark;

    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    do {
        if (i % 2) {
            player = 2;
            mark = 'O';
        }
        else {
            player = 1;
            mark = 'X';
        }
        board();
        cout << "player " << player << " choose a square";
        cin >> choice;

        switch (choice) {
        case 1:
            square[1] = mark;
            break;
        case 2:
            square[2] = mark;
            break;
        case 3:
            square[3] = mark;
            break;
        case 4:
            square[4] = mark;
            break;
        case 5:
            square[5] = mark;
            break;
        case 6:
            square[6] = mark;
            break;
        case 7:
            square[7] = mark;
            break;
        case 8:
            square[8] = mark;
            break;
        case 9:
            square[9] = mark;
            break;
        default:
            cout << "choose a number" << endl;
        }
        i++;
        x = checkWin();
    } while (x != 1);
    cout << "player " << player << " wins";
    return 0;
}
