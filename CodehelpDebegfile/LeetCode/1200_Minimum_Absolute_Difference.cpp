// 1200. Minimum Absolute Difference
// Example 1:

// Input: arr = [4,2,1,3]
// Output: [[1,2],[2,3],[3,4]]
// Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
// Example 2:
// Input: arr = [1,3,6,10,15]
// Output: [[1,3]]
// Example 3:
// Input: arr = [3,8,-10,23,19,-4,-14,27]
// Output: [[-14,-10],[19,23],[23,27]]

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {4,2,1,3};
    vector<vector<int>> ans;
    vector<int> row;
    sort(arr.begin(),arr.end());
    int mini = INT_MAX;

    //arr = 1,2,3,4
    for(int i=0;i<arr.size()-1;i++){
        int diff = arr[i+1]-arr[i];

        if(diff < mini){
            ans.clear();
            mini = diff;
            ans.push_back(vector<int> {arr[i],arr[i+1]});
        }

        else if(diff == mini){
            ans.push_back(vector<int> {arr[i],arr[i+1]});
        }
    }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                cout<<ans[i][j]<<" ";
            }
        }
}