// 3020. Find the Maximum Number of Elements in Subset
// You can place the selected elements in a 0-indexed array such that it follows the pattern: [x, x2, x4, ..., xk/2, xk, xk/2, ..., x4, x2, x] (Note that k can be be any non-negative power of 2). For example, [2, 4, 16, 4, 2] and [3, 9, 3] follow the pattern while [2, 4, 8, 4, 2] does not.
// Return the maximum number of elements in a subset that satisfies these conditions.
// Example 1:
// Input: nums = [5,4,1,2,2]
// Output: 3
// Explanation: We can select the subset {4,2,2}, which can be placed in the array as [2,4,2] which follows the pattern and 22 == 4. Hence the answer is 3.
// Example 2:
// Input: nums = [1,3,2,4]
// Output: 1
// Explanation: We can select the subset {1}, which can be placed in the array as [1] which follows the pattern. Hence the answer is 1. Note that we could have also selected the subsets {2}, {3}, or {4}, there may be multiple subsets which provide the same answer. 
#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

int main() {
    vector<int> nums = {5,4,1,2,2};

    map<long long, int> freq;
    int one = 0;

    for (auto it : nums) {
        if (it == 1) one++;
        else freq[it]++;
    }

    if (one != 0 && one % 2 == 0) {
        one--;
    }

    int ans = one;

    for (auto it : freq) {
        long long val = it.first;
        long long base = sqrt(val);

        if ((base * base == val) && freq.count(base) && freq[base] > 1) {
            continue;
        }

        int count = 0;

        while (freq.count(val) && freq[val] > 1) {
            count += 2;
            val = val * val;
        }

        if (freq[val] == 1) count++;
        else count--;

        ans = max(ans, count);
    }

    cout << ans << endl;
    return 0;
}