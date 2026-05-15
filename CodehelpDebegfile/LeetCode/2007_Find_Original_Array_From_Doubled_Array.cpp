// 2007. Find Original Array From Doubled Array
// Example 1:
// Input: arr = [1,3,4,2,6,8]
// Output: [1,3,4]
// Explanation: One possible original array could be [1,3,4]:
// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.
// Other original arrays could be [4,3,1] or [3,1,4].
// Example 2:
// Input: arr = [6,3,0,1]
// Output: []
// Explanation: arr is not a doubled array.
// Example 3:
// Input: arr = [1]
// Output: []
// Explanation: arr is not a doubled array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,3,4,2,6,8};
    vector<int> ans;
        int n = arr.size();
        if (n&1) return {};   // odd size impossible

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i];
            int target = x * 2;

            auto it = find(arr.begin() + i + 1, arr.end(), target);

            if (it == arr.end()) {
                return {};  // double nahi mila
            }

            ans.push_back(x);

            // double ko remove karo
            arr.erase(it);
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
}

//for leetcode

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2 != 0) return {};   // odd size impossible

        sort(changed.begin(), changed.end());

        vector<int> ans;

        for (int i = 0; i < changed.size(); i++) {
            int x = changed[i];
            int target = x * 2;

            auto it = find(changed.begin() + i + 1, changed.end(), target);

            if (it == changed.end()) {
                return {};  // double nahi mila
            }

            ans.push_back(x);

            // double ko remove karo
            changed.erase(it);
        }

        return ans;
    }
};
