// 
// Example 1:
// Input: nums = [2,1,3]
// Output: [2,3,1]
// Explanation: After the first 2 operations, arr1 = [2] and arr2 = [1].
// In the 3rd operation, as the last element of arr1 is greater than the last element of arr2 (2 > 1), append nums[3] to arr1.
// After 3 operations, arr1 = [2,3] and arr2 = [1].
// Hence, the array result formed by concatenation is [2,3,1].
// Example 2:
// Input: nums = [5,4,3,8]
// Output: [5,3,4,8]
// Explanation: After the first 2 operations, arr1 = [5] and arr2 = [4].
// In the 3rd operation, as the last element of arr1 is greater than the last element of arr2 (5 > 4), append nums[3] to arr1, hence arr1 becomes [5,3].
// In the 4th operation, as the last element of arr2 is greater than the last element of arr1 (4 > 3), append nums[4] to arr2, hence arr2 becomes [4,8].
// After 4 operations, arr1 = [5,3] and arr2 = [4,8].
// Hence, the array result formed by concatenation is [5,3,4,8].
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {5,4,3,8};
    int n = nums.size();

    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);
    for(int i=2;i<n;i++){
        int a1 = arr1.size()-1;
        int a2 = arr2.size()-1;
        if(arr1[a1] > arr2[a2]){
            arr1.push_back(nums[i]);

        }
        else{
            arr2.push_back(nums[i]);
        }
    }
    vector<int> result;

    result.insert(result.end(), arr1.begin(), arr1.end());

    result.insert(result.end(), arr2.begin(), arr2.end());

    for (int x : result) {
        cout << x << " ";
    }    
}