// 2574. Left and Right Sum Differences
// Define two arrays leftSum and rightSum where:
// leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
// rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
// Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|
// Example 1:
// Input: nums = [10,4,8,3]
// Output: [15,1,11,22]
// Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
// The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
// Example 2:
// Input: nums = [1]
// Output: [0]
// Explanation: The array leftSum is [0] and the array rightSum is [0].
// The array answer is [|0 - 0|] = [0].
// Constraints:
// 1 <= nums.length <= 1000
// 1 <= nums[i] <= 105
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {10,4,8,3};
    int n = nums.size();
    vector<int> leftsum(n);
    vector<int> rightsum(n);
    vector<int> answer(n);

    //leftsum
    int lsum = 0;
    for(int i=0;i<n;i++){
        leftsum[i] = lsum;
        lsum += nums[i];
    }
    
    //rightsum
    int rsum = 0;
    for(int i=n-1;i>=0;i--){
        rightsum[i] = rsum;
        rsum += nums[i];
    }

    for(int i=0;i<n;i++){
        answer[i] = abs(leftsum[i]-rightsum[i]);
    }
        for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }
}