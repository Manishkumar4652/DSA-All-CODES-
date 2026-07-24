// 3513. Number of Unique XOR Triplets I
// Example 1:
// Input: nums = [1,2]
// Output: 2
// Explanation:
// The possible XOR triplet values are:
// (0, 0, 0) → 1 XOR 1 XOR 1 = 1
// (0, 0, 1) → 1 XOR 1 XOR 2 = 2
// (0, 1, 1) → 1 XOR 2 XOR 2 = 1
// (1, 1, 1) → 2 XOR 2 XOR 2 = 2
// The unique XOR values are {1, 2}, so the output is 2.
// Example 2:
// Input: nums = [3,1,2]
// Output: 4
// Explanation:
// The possible XOR triplet values include:
// (0, 0, 0) → 3 XOR 3 XOR 3 = 3
// (0, 0, 1) → 3 XOR 3 XOR 1 = 1
// (0, 0, 2) → 3 XOR 3 XOR 2 = 2
// (0, 1, 2) → 3 XOR 1 XOR 2 = 0
// The unique XOR values are {0, 1, 2, 3}, so the output is 4.
#include<iostream>
#include<vector>
#include <set>
using namespace std;
int main(){
    vector<int> nums = {1,2};
    int n = nums.size();

        set<int> st;

        // Generate all valid triplets
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                for (int k = j; k < n; k++) {

                    int xr = nums[i] ^ nums[j] ^ nums[k];
                    st.insert(xr);

                }
            }
        }

        cout<<st.size();
}