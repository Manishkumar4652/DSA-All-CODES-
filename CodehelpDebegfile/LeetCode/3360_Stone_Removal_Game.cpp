// 3360. Stone Removal Game
// Alice and Bob are playing a game where they take turns removing stones from a pile, with Alice going first.
// Alice starts by removing exactly 10 stones on her first turn.
// For each subsequent turn, each player removes exactly 1 fewer stone than the previous opponent.
// The player who cannot make a move loses the game.
// Given a positive integer n, return true if Alice wins the game and false otherwise.
// Example 1:
// Input: n = 12
// Output: true
// Explanation:
// Alice removes 10 stones on her first turn, leaving 2 stones for Bob.
// Bob cannot remove 9 stones, so Alice wins.
// Example 2:
// Input: n = 1
// Output: false
// Explanation:
// Alice cannot remove 10 stones, so Alice loses.
// Constraints:
// 1 <= n <= 50
#include <iostream>
using namespace std;

class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        int moves = 0;

        while (n >= remove && remove > 0) {
            n -= remove;
            remove--;
            moves++;
        }

        return moves % 2 == 1;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution sol;
    if (sol.canAliceWin(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
