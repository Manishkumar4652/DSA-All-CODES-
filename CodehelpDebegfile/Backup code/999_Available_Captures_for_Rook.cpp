// 999. Available Captures for Rook
// You are given an 8 x 8 matrix representing a chessboard. There is exactly one white rook represented by 'R', some number of white bishops 'B', and some number of black pawns 'p'. Empty squares are represented by '.'.
// A rook can move any number of squares horizontally or vertically (up, down, left, right) until it reaches another piece or the edge of the board. A rook is attacking a pawn if it can move to the pawn's square in one move.
// Note: A rook cannot move through other pieces, such as bishops or pawns. This means a rook cannot attack a pawn if there is another piece blocking the path.
// Return the number of pawns the white rook is attacking.
// Example 1:
// Input: board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","R",".",".",".","p"],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 3
// Explanation:
// In this example, the rook is attacking all the pawns.
// Example 2:
// Input: board = [[".",".",".",".",".",".","."],[".","p","p","p","p","p",".","."],[".","p","p","B","p","p",".","."],[".","p","B","R","B","p",".","."],[".","p","p","B","p","p",".","."],[".","p","p","p","p","p",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 0
// Explanation:
// The bishops are blocking the rook from attacking any of the pawns.
// Example 3:
// Input: board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","p",".",".",".","."],["p","p",".","R",".","p","B","."],[".",".",".",".",".",".",".","."],[".",".",".","B",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 3
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<string>> board = {
        {".",".",".",".",".",".",".","."},
        {".",".",".","p",".",".",".","."},
        {".",".",".","R",".",".",".","p"},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".","p",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."}
    };

    int ri = 0, rj = 0;
    int n = 8;

    // Find rook position
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(board[i][j] == "R") {
                ri = i;
                rj = j;
            }
        }
    }

    int hitcount = 0;

    // Up
    int i = ri - 1;
    while(i >= 0) {
        if(board[i][rj] == "B") break;
        if(board[i][rj] == "p") {
            hitcount++;
            break;
        }
        i--;
    }

    // Down
    i = ri + 1;
    while(i < n) {
        if(board[i][rj] == "B") break;
        if(board[i][rj] == "p") {
            hitcount++;
            break;
        }
        i++;
    }

    // Left
    int j = rj - 1;
    while(j >= 0) {
        if(board[ri][j] == "B") break;
        if(board[ri][j] == "p") {
            hitcount++;
            break;
        }
        j--;
    }

    // Right
    j = rj + 1;
    while(j < n) {
        if(board[ri][j] == "B") break;
        if(board[ri][j] == "p") {
            hitcount++;
            break;
        }
        j++;
    }

    cout << hitcount;
}






class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
    int ri = 0, rj = 0;
    int n = 8;

    // Find rook position
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(board[i][j] == 'R') {
                ri = i;
                rj = j;
            }
        }
    }

    int hitcount = 0;

    // Up
    int i = ri - 1;
    while(i >= 0) {
        if(board[i][rj] == 'B') break;
        if(board[i][rj] == 'p') {
            hitcount++;
            break;
        }
        i--;
    }

    // Down
    i = ri + 1;
    while(i < n) {
        if(board[i][rj] == 'B') break;
        if(board[i][rj] == 'p') {
            hitcount++;
            break;
        }
        i++;
    }

    // Left
    int j = rj - 1;
    while(j >= 0) {
        if(board[ri][j] == 'B') break;
        if(board[ri][j] == 'p') {
            hitcount++;
            break;
        }
        j--;
    }

    // Right
    j = rj + 1;
    while(j < n) {
        if(board[ri][j] == 'B') break;
        if(board[ri][j] == 'p') {
            hitcount++;
            break;
        }
        j++;
    }

        return hitcount;        
    }
};