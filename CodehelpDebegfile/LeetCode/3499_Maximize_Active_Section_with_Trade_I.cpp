// 3499. Maximize Active Section with Trade I
// Example 1:
// Input: s = "01"
// Output: 1
// Explanation:
// Because there is no block of '1's surrounded by '0's, no valid trade is possible. The maximum number of active sections is 1.
// Example 2:
// Input: s = "0100"
// Output: 4
// Explanation:
// String "0100" → Augmented to "101001".
// Choose "0100", convert "101001" → "100001" → "111111".
// The final string without augmentation is "1111". The maximum number of active sections is 4.
// Example 3:
// Input: s = "1000100"
// Output: 7
// Explanation:
// String "1000100" → Augmented to "110001001".
// Choose "000100", convert "110001001" → "110000001" → "111111111".
// The final string without augmentation is "1111111". The maximum number of active sections is 7.
// Example 4:
// Input: s = "01010"
// Output: 4
// Explanation:
// String "01010" → Augmented to "1010101".
// Choose "010", convert "1010101" → "1000101" → "1111101".
// The final string without augmentation is "11110". The maximum number of active sections is 4.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int maxActiveSectionsAfterTrade(string s) {
    int n = s.length();

    // Existing count of 1s
    int activeCount = count(s.begin(), s.end(), '1');

    vector<int> inactiveBlocks;

    int i = 0;
    while (i < n) {
        if (s[i] == '0') {
            int start = i;
            while (i < n && s[i] == '0')
                i++;

            inactiveBlocks.push_back(i - start);
        } else {
            i++;
        }
    }

    int maxPairSum = 0;
    for (int i = 1; i < inactiveBlocks.size(); i++) {
        maxPairSum = max(maxPairSum, inactiveBlocks[i] + inactiveBlocks[i - 1]);
    }

    return maxPairSum + activeCount;
}

int main() {

    // Test Case
    string s = "01010";

    cout << "Input : " << s << endl;
    cout << "Output: " << maxActiveSectionsAfterTrade(s) << endl;

    return 0;
}