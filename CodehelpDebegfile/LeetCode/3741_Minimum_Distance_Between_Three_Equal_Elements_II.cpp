// 3741. Minimum Distance Between Three Equal Elements II
// Example 1:
// Input: nums = [1,2,1,1,3]
// Output: 6
// Explanation:
// The minimum distance is achieved by the good tuple (0, 2, 3).
// (0, 2, 3) is a good tuple because nums[0] == nums[2] == nums[3] == 1. Its distance is abs(0 - 2) + abs(2 - 3) + abs(3 - 0) = 2 + 1 + 3 = 6.
// Example 2:
// Input: nums = [1,1,2,3,2,1,2]
// Output: 8
// Explanation:
// The minimum distance is achieved by the good tuple (2, 4, 6).
// (2, 4, 6) is a good tuple because nums[2] == nums[4] == nums[6] == 2. Its distance is abs(2 - 4) + abs(4 - 6) + abs(6 - 2) = 2 + 2 + 4 = 8.
#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> nums = {1,1,2,3,2,1,2};
    int n = nums.size();
    int result = INT_MAX;

    unordered_map<int , vector<int>> mp; //unordered_map ke andher ak vector bana diya

    for(int k=0;k<n;k++){

        //map ke andher jo vector hai usme element push karna
        mp[nums[k]].push_back(k);

        //aghar mera map ke andher jo vector hai uska size 3 se greater ho to
        if(mp[nums[k]].size() >= 3){

            //map ke andher ke vector ko nikalna
            vector<int> &vec = mp[nums[k]];

            int siz = vec.size();

            int i = vec[siz-3];

            result = min(result , (k-i));
        }

    }

    if(result == INT_MAX) {
        cout << -1;
    } else {
        cout << result * 2;
    }
}