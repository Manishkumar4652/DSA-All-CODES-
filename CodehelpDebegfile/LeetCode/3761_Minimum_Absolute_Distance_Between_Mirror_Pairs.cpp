// 3761. Minimum Absolute Distance Between Mirror Pairs
// You are given an integer array nums.
// A mirror pair is a pair of indices (i, j) such that:
// 0 <= i < j < nums.length, and
// reverse(nums[i]) == nums[j], where reverse(x) denotes the integer formed by reversing the digits of x. Leading zeros are omitted after reversing, for example reverse(120) = 21.
// Return the minimum absolute distance between the indices of any mirror pair. The absolute distance between indices i and j is abs(i - j).
// If no mirror pair exists, return -1.
// Example 1:
// Input: nums = [12,21,45,33,54]
// Output: 1
// Explanation:
// The mirror pairs are:
// (0, 1) since reverse(nums[0]) = reverse(12) = 21 = nums[1], giving an absolute distance abs(0 - 1) = 1.
// (2, 4) since reverse(nums[2]) = reverse(45) = 54 = nums[4], giving an absolute distance abs(2 - 4) = 2.
// The minimum absolute distance among all pairs is 1.
// Example 2:
// Input: nums = [120,21]
// Output: 1
// Explanation:
// There is only one mirror pair (0, 1) since reverse(nums[0]) = reverse(120) = 21 = nums[1].
// The minimum absolute distance is 1.
// Example 3:
// Input: nums = [21,120]
// Output: -1
// Explanation:
// There are no mirror pairs in the array.
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector<int> nums = {12,21,45,33,54};
//     int n = nums.size();
//     int mini = INT_MAX;
    
//     for(int i=0;i<n;i++){
//         int ans = 0;

//         //reverse number
//         int digit = nums[i];
//         while(digit > 0){
//             ans = (ans * 10) + (digit % 10);
//             digit = digit / 10;
//         }

//         for(int j=i+1;j<n;j++){
//             if(ans == nums[j]){
//                 mini = min(mini,abs(i-j));
//             }
//         }

//     }
//     if(mini == INT_MAX){
//         cout<<-1;
//     }
//     else{
//         cout<<mini;
//     }
// }


//Optimal Apporach 

//T.C : O(n * log(10(num)))

#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
int getreverse(int n){

    int ans = 0;
    while(n > 0){
        int lastdigit = n%10;
        ans = (ans*10)+lastdigit;
        n = n/10;
    }

    return ans;
}
int main(){
    vector<int> nums = {12,21,45,33,54};
    int n = nums.size();

    unordered_map<int,int> mp;

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        if(mp.count(nums[i])){
            mini = min(mini,i-mp[nums[i]]);
        }

        mp[getreverse(nums[i])] = i;
    }

    if(mini == INT_MAX) cout<<-1;
    else{ cout<<mini; }

}