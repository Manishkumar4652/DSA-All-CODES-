// 3634. Minimum Removals to Balance Array
// Example 1:
// Input: nums = [2,1,5], k = 2
// Output: 1
// Explanation:
// Remove nums[2] = 5 to get nums = [2, 1].
// Now j = 2, i = 1 and j <= i * k as 2 <= 1 * 2. Thus, the answer is 1.
// Example 2:
// Input: nums = [1,6,2,9], k = 3
// Output: 2
// Explanation:
// Remove nums[0] = 1 and nums[3] = 9 to get nums = [6, 2].
// Now j = 6, i = 2 and j <= i * k as 6 <= 2 * 3. Thus, the answer is 2.
// Example 3:
// Input: nums = [4,6], k = 2
// Output: 0
// Explanation:
// Since nums is already balanced as 6 <= 4 * 2, no elements need to be removed.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,6,2,9};
    sort(arr.begin(),arr.end());
    int k = 3;
    int i = 0;
    int j = 1;
    int maxoper = 0;

    while(i < arr.size() && j < arr.size()){
        if(arr[j] <= arr[i]*k){
            maxoper = max(maxoper,j-i+1);
            j++;
        }
        else{
            i++;
        }
    }
        int ans = arr.size()-maxoper;
        cout<<ans;
}