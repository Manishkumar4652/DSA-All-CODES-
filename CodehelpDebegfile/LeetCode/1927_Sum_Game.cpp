// 1927. Sum Game
// Example 1:
// Input: num = "5023"
// Output: false
// Explanation: There are no moves to be made.
// The sum of the first half is equal to the sum of the second half: 5 + 0 = 2 + 3.
// Example 2:
// Input: num = "25??"
// Output: true
// Explanation: Alice can replace one of the '?'s with '9' and it will be impossible for Bob to make the sums equal.
// Example 3:
// Input: num = "?3295???"
// Output: false
// Explanation: It can be proven that Bob will always win. One possible outcome is:
// - Alice replaces the first '?' with '9'. num = "93295???".
// - Bob replaces one of the '?' in the right half with '9'. num = "932959??".
// - Alice replaces one of the '?' in the right half with '2'. num = "9329592?".
// - Bob replaces the last '?' in the right half with '7'. num = "93295927".
// Bob wins because 9 + 3 + 2 + 9 = 5 + 9 + 2 + 7.
#include <iostream>
#include <string>
using namespace std;

bool sumGame(string num) {
    int n = num.size();
    int half = n / 2;

    int leftSum = 0, rightSum = 0;
    int leftQ = 0, rightQ = 0;

    // Left half
    for (int i = 0; i < half; i++) {
        if (num[i] == '?') {
            leftQ++;
        } 
        else {
            leftSum += num[i] - '0';
        }
    }

    // Right half
    for (int i = half; i < n; i++) {
        if (num[i] == '?') {
            rightQ++;
        } 
        else {
            rightSum += num[i] - '0';
        }
    }

    // Odd number of '?' => Alice wins
    if ((leftQ + rightQ) % 2 == 1) {
        return true;
    }

    // Bob wins only if exact balance is possible
    if (2 * (leftSum - rightSum) == 9 * (rightQ - leftQ)) {
        return false;
    }

    return true;
}

int main() {
    string num = "?3295???";

    bool result = sumGame(num);

    if (result) {
        cout << "Alice wins" << endl;
    } 
    else {
        cout << "Bob wins" << endl;
    }

    return 0;
}