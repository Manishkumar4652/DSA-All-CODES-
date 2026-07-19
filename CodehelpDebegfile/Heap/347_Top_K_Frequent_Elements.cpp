// 347. Top K Frequent Elements
// Example 1:
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:
// Input: nums = [1], k = 1
// Output: [1]
// Example 3:
// Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
// Output: [1,2]

#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;   // Frequency descending
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    int n = nums.size();

    map<int, int> freq;

    // Frequency Count
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    // Copy map into vector
    vector<pair<int, int>> v(freq.begin(), freq.end());

    // Sort according to frequency
    sort(v.begin(), v.end(), cmp);

    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(v[i].second);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
