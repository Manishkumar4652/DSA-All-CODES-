// 3. Find All Numbers Disappeared in an Array
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:
// Input: nums = [1,1]
// Output: [2]
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans;

    int n = arr.size();

    // Step 1: Mark present numbers
    for(int i = 0; i < n; i++){
        int index = abs(arr[i]) - 1;

        if(arr[index] > 0)
            arr[index] = -arr[index];
    }

    // Step 2: Find missing numbers
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            ans.push_back(i + 1);
        }
    }

    // Print answer
    for(int x : ans){
        cout << x << " ";
    }
}
