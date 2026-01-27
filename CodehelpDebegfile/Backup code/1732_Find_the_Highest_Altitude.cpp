// 1732. Find the Highest Altitude
// Example 1:
// Input: gain = [-5,1,5,0,-7]
// Output: 1
// Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
// Example 2:
// Input: gain = [-4,-3,-2,-1,4,3,2]
// Output: 0
// Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {-4,-3,-2,-1,4,3,2};
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];

        if(sum > maxi){
            maxi = sum;
        }
    }
    if(maxi < 0)  cout<<0;
    else cout<<maxi;
}

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
            int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<gain.size();i++){
        sum = sum + gain[i];

        if(sum > maxi){
            maxi = sum;
        }
    }
    if(maxi < 0)  return 0;
    else return maxi;
    }
};