// 350. Intersection of Two Arrays II
// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2};

    vector<int> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();

    
vector<bool> used(n2,false);

for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(!used[j] && nums1[i] == nums2[j]){
            ans.push_back(nums1[i]);
            used[j] = true;
            break;
        }
    }
}
    for(auto &p : ans){
        cout << p << " ";
    }
}