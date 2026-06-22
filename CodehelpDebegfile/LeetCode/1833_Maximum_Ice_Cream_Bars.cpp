// 1833. Maximum Ice Cream Bars
// Example 1:
// Input: costs = [1,3,2,4,1], coins = 7
// Output: 4
// Explanation: The boy can buy ice cream bars at indices 0,1,2,4 for a total price of 1 + 3 + 2 + 1 = 7.
// Example 2:
// Input: costs = [10,6,8,7,7,8], coins = 5
// Output: 0
// Explanation: The boy cannot afford any of the ice cream bars.
// Example 3:
// Input: costs = [1,6,3,1,2,5], coins = 20
// Output: 6
// Explanation: The boy can buy all the ice cream bars for a total price of 1 + 6 + 3 + 1 + 2 + 5 = 18.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> costs = {1,3,2,4,1};
    int coins = 7;
    int ans = 0;
    int n = costs.size();
    sort(costs.begin(),costs.end());
    for(int i=0;i<n;i++){
        if(coins - costs[i] >= 0){
            ans++;
            coins -= costs[i];
        }
        else{
            break;
        }
    }
    cout<<ans;
}