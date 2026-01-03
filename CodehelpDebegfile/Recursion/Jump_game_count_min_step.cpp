#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void solve(vector<int> arr , int index , int &mini , int step){
    // base case
    if(index == arr.size()-1){
        mini = min(mini , step);
        return;
    }
    if(index >= arr.size()){
        return;
    }
    // process 
    for(int jump=1;jump<=arr[index];jump++){

        solve(arr , jump+index , mini , step+1);
    }
}
int main(){
    vector<int> arr = {2,3,1,1,4};  //Yes
    //vector<int> arr = {2,0,1,0,4};  //No
    int index = 0;
    int step = 0;
    int mini = INT_MAX;
    solve(arr , index , mini , step);
    cout<<"Minimum step to reach last index: "<<mini;
}