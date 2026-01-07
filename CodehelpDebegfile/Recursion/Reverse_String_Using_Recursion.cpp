//  Reverse String [Using Recursion]
// Example 1:
// Input: s = [h,e,l,l,o]
// Output:
// [o,l,l,e,h]
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<char>&s , int i , int n){
    // base case
    if(i > n){
        return 0;
    }

    swap(s[i] , s[n]);

    solve(s , i+1 , n-1);
    
}
int main(){
    vector<char> s = {'h','e','l','l','o'};
    int n = s.size()-1;
    int i = 0;
    int ans = solve(s , i , n);
    
    for(auto a: s){
        cout<<a;
    }
}