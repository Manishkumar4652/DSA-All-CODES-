// 989. Add to Array-Form of Integer
// Example 1:
// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
// Example 2:
// Input: num = [2,7,4], k = 181
// Output: [4,5,5]
// Explanation: 274 + 181 = 455
// Example 3:
// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> num = {1, 2, 0, 0};
    int k = 34;

    int i = num.size() - 1;

    while (i >= 0 && k > 0) {
        k += num[i];
        num[i] = k % 10;
        k /= 10;
        i--;
    }

    while (k > 0) {
        num.insert(num.begin(), k % 10);
        k /= 10;
    }

    cout << "Answer: ";
    for (int x : num) {
        cout << x << " ";
    }

    return 0;
}