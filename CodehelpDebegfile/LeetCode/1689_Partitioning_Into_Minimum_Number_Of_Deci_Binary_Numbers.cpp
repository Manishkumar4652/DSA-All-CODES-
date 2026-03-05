// 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
// Example 1:
// Input: n = "32"
// Output: 3
// Explanation: 10 + 11 + 11 = 32
// Example 2:
// Input: n = "82734"
// Output: 8
// Example 3:
// Input: n = "27346209830709182346"
// Output: 9
#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    //Method first
       string n = "82734";
    // int maxi = INT_MIN;
    // for(int i=0;i<n.size();i++){
    //     maxi = max(maxi,(n[i]-'0'));
    // }
    // cout<<maxi;

    //Mehtod second
    char maxi = *max_element(n.begin(),n.end());
    cout<<maxi;
}