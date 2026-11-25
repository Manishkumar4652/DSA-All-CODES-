// 3934. Smallest Unique Subarray
// You are given an integer array nums.
// Find the minimum length of a subarray that is not identical to any other subarray in nums.
// Return an integer denoting the minimum possible length of such a subarray.
// Two subarrays are considered identical if they have the same length and the same elements in corresponding positions.
// Example 1:
// Input: nums = [3,3,3]
// Output: 3
// Explanation:
// Subarrays of length 1: [3] → appears 3 times
// Subarrays of length 2: [3, 3] → appears 2 times
// Subarrays of length 3: [3, 3, 3] → appears once
// The subarray [3, 3, 3] is unique, so the smallest unique subarray length is 3.
// Example 2:
// Input: nums = [2,1,2,3,3]
// Output: 1
// Explanation:
// Subarrays of length 1:
// [2] → appears 2 times
// [1] → appears once
// [3] → appears 2 times
// The subarray [1] is unique, so the smallest unique subarray length is 1.
// Example 3:
// Input: nums = [1,1,2,2,1]
// Output: 2
// Explanation:
// Subarrays of length 1:
// [1] → appears 3 times
// [2] → appears 2 times
// Subarrays of length 2:
// [1, 1] → appears once
// [1, 2] → appears once
// [2, 2] → appears once
// [2, 1] → appears once
// There is at least one subarray of length 2 that is unique, so the smallest unique subarray length is 2.
// Constraints:
// 1 <= nums.length <= 105
// 1 <= nums[i] <= 105
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdint>
#include <algorithm>

using namespace std;

class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = static_cast<int>(nums.size());

        const uint64_t MOD1 = 1000000007ULL;
        const uint64_t MOD2 = 1000000009ULL;
        const uint64_t BASE1 = 100003ULL;
        const uint64_t BASE2 = 100019ULL;

        vector<uint64_t> pow1(n + 1, 1), pow2(n + 1, 1);
        vector<uint64_t> pref1(n + 1, 0), pref2(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            uint64_t val = static_cast<uint64_t>(nums[i]);
            pow1[i + 1] = (pow1[i] * BASE1) % MOD1;
            pow2[i + 1] = (pow2[i] * BASE2) % MOD2;
            pref1[i + 1] = (pref1[i] * BASE1 + val) % MOD1;
            pref2[i + 1] = (pref2[i] * BASE2 + val) % MOD2;
        }

        auto hasUniqueOfLen = [&](int len) -> bool {
            unordered_map<uint64_t, int> freq;
            freq.reserve(n - len + 1);

            for (int l = 0; l + len <= n; ++l) {
                int r = l + len;
                uint64_t h1 = (pref1[r] + MOD1 - (pref1[l] * pow1[len]) % MOD1) % MOD1;
                uint64_t h2 = (pref2[r] + MOD2 - (pref2[l] * pow2[len]) % MOD2) % MOD2;
                uint64_t key = (h1 << 32) | h2;
                ++freq[key];
            }

            for (const auto& entry : freq) {
                if (entry.second == 1) {
                    return true;
                }
            }
            return false;
        };

        int lo = 1, hi = n, ans = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (hasUniqueOfLen(mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Single hardcoded test case (Example 3)
    vector<int> nums = {1, 1, 2, 2, 1};

    int result = sol.smallestUniqueSubarray(nums);
    cout << "Output: " << result << endl;

    return 0;
}
