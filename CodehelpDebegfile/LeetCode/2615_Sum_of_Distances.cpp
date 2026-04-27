// 2615. Sum of Distances
// You are given a 0-indexed integer array nums. There exists an array arr of length nums.length, where arr[i] is the sum of |i - j| over all j such that nums[j] == nums[i] and j != i. If there is no such j, set arr[i] to be 0.
// Return the array arr.
// Example 1:
// Input: nums = [1,3,1,1,2]
// Output: [5,0,3,4,0]
// Explanation: 
// When i = 0, nums[0] == nums[2] and nums[0] == nums[3]. Therefore, arr[0] = |0 - 2| + |0 - 3| = 5. 
// When i = 1, arr[1] = 0 because there is no other index with value 3.
// When i = 2, nums[2] == nums[0] and nums[2] == nums[3]. Therefore, arr[2] = |2 - 0| + |2 - 3| = 3. 
// When i = 3, nums[3] == nums[0] and nums[3] == nums[2]. Therefore, arr[3] = |3 - 0| + |3 - 2| = 4. 
// When i = 4, arr[4] = 0 because there is no other index with value 2. 
// Example 2:
// Input: nums = [0,5,3]
// Output: [0,0,0]
// Explanation: Since each element in nums is distinct, arr[i] = 0 for all i.

// Constraints:
// 1 <= nums.length <= 105
// 0 <= nums[i] <= 109

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     vector<int> nums = {1,3,1,1,2};
//     int n = nums.size();

//     unordered_map<int , vector<int>> mp;
//     vector<vector<int>> ans(n);


//     for(int i=0;i<n;i++){
//         mp[nums[i]].push_back(i);
//     }

//     for(int i = 0; i < n; i++){
//     ans[i] = mp[nums[i]];
//     }

//     cout<<ans[0][0]<<endl;
//     cout<<ans[0][1]<<endl;
//     cout<<ans[0][2]<<endl;
//     cout<<ans[0][3]<<endl;
//     cout<<ans[0][4]<<endl;
// }



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> nums = {1,3,1,1,2};
    int n = nums.size();

    unordered_map<int, vector<int>> mp;

    // store indices
    for(int i = 0; i < n; i++){
        mp[nums[i]].push_back(i);
    }

    vector<long long> arr(n, 0);

    // compute answer
    for(auto &it : mp){
        vector<int> &v = it.second;
        int m = v.size();

        for(int i = 0; i < m; i++){
            long long sum = 0;
            for(int j = 0; j < m; j++){
                if(i != j){
                    sum += abs(v[i] - v[j]);
                }
            }
            arr[v[i]] = sum;
        }
    }

    // print
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}



//Optimal approch

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 1, 1, 2};
    int n = nums.size();

    unordered_map<int, vector<int>> mp;

    // Step 1: store indices
    for(int i = 0; i < n; i++){
        mp[nums[i]].push_back(i);
    }

    vector<long long> ans(n, 0);

    // Step 2: process each group
    for(auto &it : mp){
        vector<int> &v = it.second;
        int m = v.size();

        vector<long long> prefix(m, 0);
        prefix[0] = v[0];

        for(int i = 1; i < m; i++){
            prefix[i] = prefix[i-1] + v[i];
        }

        for(int i = 0; i < m; i++){
            long long left = 0, right = 0;

            if(i > 0){
                left = (long long)i * v[i] - prefix[i-1];
            }

            if(i < m - 1){
                right = (prefix[m-1] - prefix[i]) - (long long)(m - i - 1) * v[i];
            }

            ans[v[i]] = left + right;
        }
    }

    // Output
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}