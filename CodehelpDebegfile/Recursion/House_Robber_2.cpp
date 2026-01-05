#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int>&arr , int s , int e){
    // base case
    if(s > e) return 0;

    // option1 me 0 se end-1 tak chori karenge 
    int option1 = arr[s] + solve(arr , s+2 , e);

    //option me ham 1 se end-2 tak chori karenge
    int option2 = 0 + solve(arr , s+1 , e);

    return max(option1 , option2);
}
int main(){
    vector<int> arr = {1,2,3,4};
    int start = 0;
    int end = arr.size();
    if(arr.size() == 1) return arr[0];
    int option1 = solve(arr , 0 , end-2);
    int option2 = solve(arr , 1 , end-1);
    int maxi = max(option1 , option2);
    cout<<maxi;
}