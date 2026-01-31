// 16. 3Sum Closest
// Example 1:
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:
// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {0,0,0};
    int target = 1;
    int mini = INT_MAX;
    int bestsum = 0;
    sort(arr.begin() , arr.end());
    int n = arr.size();

    for(int i=0;i<n-2;i++){

        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            int diff = abs(sum-target);

            if(diff < mini){
                mini = diff;
                bestsum = sum;
            }

            if(sum == target){
                cout<<sum;
                return 0;
            }
            else if(sum < target){
                j++;
            }
            else{
                k--;
            }

        }
    }
        cout<<bestsum;

}

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mini = INT_MAX;
        int bestsum = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                if (diff < mini) {
                    mini = diff;
                    bestsum = sum;
                }

                if (sum == target) {
                    return sum;
                    
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return bestsum;
    }
};