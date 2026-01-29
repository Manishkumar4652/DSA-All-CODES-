// 88. Merge Sorted Array
// Example 1:
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:
// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:
// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

#include<iostream>
#include<vector>
using namespace std;
int mergsortedans(vector<int>&arr1,vector<int>&arr2,int&n1 , int&n2 ,vector<int>&ans){
    int i = 0;
    int j = 0;

    //base case
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    //Remain element
    while(i < n1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j < n2){
        ans.push_back(arr2[j]);
        j++;
    }

}
int main(){
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;

    mergsortedans(arr1,arr2,n1,n2,ans);

    for(auto a : ans){
        cout<<a<<" ";
    }
}

class Solution {
public:
    void mergsortedans(vector<int>& nums1, vector<int>& nums2, int& m, int& n,
                       vector<int>& ans) {
        int i = 0;
        int j = 0;

        // base case
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Remain element
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        mergsortedans(nums1, nums2, m, n, ans);
        // return ans;
        //  ans ko nums1 me copy karo
        for (int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }
    }
};