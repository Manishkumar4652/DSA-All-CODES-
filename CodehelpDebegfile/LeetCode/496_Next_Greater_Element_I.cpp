// 496. Next Greater Element I
// Example 1:
// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// Example 2:
// Input: nums1 = [2,4], nums2 = [1,2,3,4]
// Output: [3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
// - 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    int n = nums1.size();
    int m = nums2.size();

    for (int i = 0; i < n; i++) {
        int original = nums1[i];
        bool found = false;

        for (int j = 0; j < m; j++) {
            if (original == nums2[j]) {

                // nums2[j] ke right side check karo
                for (int k = j + 1; k < m; k++) {
                    if (nums2[k] > original) {
                        nums1[i] = nums2[k];
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    nums1[i] = -1;
                }

                break;
            }
        }
    }

    for (int p : nums1) {
        cout << p << " ";
    }

    return 0;
}