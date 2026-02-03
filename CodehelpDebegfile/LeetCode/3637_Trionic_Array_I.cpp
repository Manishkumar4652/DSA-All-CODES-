// 3637. Trionic Array I
// nums[0...p] is strictly increasing,
// nums[p...q] is strictly decreasing,
// nums[q...n − 1] is strictly increasing.
// Return true if nums is trionic, otherwise chek = false.
// Example 1:
// Input: nums = [1,3,5,4,2,6]
// Output: true
// Explanation:
// Pick p = 2, q = 4:
// nums[0...2] = [1, 3, 5] is strictly increasing (1 < 3 < 5).
// nums[2...4] = [5, 4, 2] is strictly decreasing (5 > 4 > 2).
// nums[4...5] = [2, 6] is strictly increasing (2 < 6).
// Example 2:
// Input: nums = [2,1,3]
// Output: false
// Explanation:
// There is no way to pick p and q to form the required three segments.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1,3,5,4,2,6};
    int n = nums.size();
    if (n < 3) {
        cout << "no";
        return 0;
    }
    int i = 0;
    //strictly increasing
    while (i + 1 < n && nums[i] < nums[i + 1]) {
        i++;
    }

    if (i == 0 || i == n - 1) {
        cout << "no";
        return 0;
    }
    //strictly decreasing
    while (i + 1 < n && nums[i] > nums[i + 1]) {
        i++;
    }
    if (i == n - 1) {
        cout << "no";
        return 0;
    }
    //strictly increasing
    while (i + 1 < n && nums[i] < nums[i + 1]) {
        i++;
    }
    if (i == n - 1)
        cout << "yes";
    else
        cout << "no";
}


class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        int i = 0;
        // strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }

        if (i == 0 || i == n - 1) {
            return false;
        }
        // strictly decreasing
        while (i + 1 < n && nums[i] > nums[i + 1]) {
            i++;
        }
        if (i == n - 1) {
            return false;
        }
        // strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i == n - 1)
            return true;
        else
            return false;
    }
};