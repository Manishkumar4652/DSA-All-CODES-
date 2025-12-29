#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int>&arr , int index){
    // base case
    if(index >= arr.size()){
        return 0;
    }

    // include first index or index + 2 because ak house ke baad continus 
    //dusare house me chori nhi kar sakte
    int include = arr[index] + solve(arr , index+2);

    // exclude me index + 1 se
    int exclude = 0 + solve(arr , index + 1);

    // max value ko return kar denge
    int maxi = max(include , exclude);
    return maxi;
}
int main(){
    vector<int> arr = {1,2,3,4};
    int index = 0;
    int ans = solve(arr , index);
    cout<<ans;
}