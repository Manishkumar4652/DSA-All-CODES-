// 3718. Smallest Missing Multiple of K
// Example 1:
// Input: nums = [8,2,3,4,6], k = 2
// Output: 10
// Explanation:
// The multiples of k = 2 are 2, 4, 6, 8, 10, 12... and the smallest multiple missing from nums is 10.
// Example 2:
// Input: nums = [1,4,7,10,15], k = 5
// Output: 5
// Explanation:
// The multiples of k = 5 are 5, 10, 15, 20... and the smallest multiple missing from nums is 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {8, 2, 3, 4, 6};
    int k = 2;

    int n = nums.size();

    for (int multiple = k; multiple <= (n + 1) * k; multiple += k) {

        auto it = find(nums.begin(), nums.end(), multiple);

        if (it == nums.end()) {
            cout<< multiple;
        }
    }

    return 0;
}