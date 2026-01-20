// 3065. Minimum Operations to Exceed Threshold Value I
// Example 1:
// Input: nums = [2,11,10,1,3], k = 10
// Output: 3
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,11,10,1,3};
    int count = 0;
    int k = 10;

    for(int i=0;i<arr.size();i++){
        if(k > arr[i]){
            count++;
        }
    }
        cout<<count;
}
