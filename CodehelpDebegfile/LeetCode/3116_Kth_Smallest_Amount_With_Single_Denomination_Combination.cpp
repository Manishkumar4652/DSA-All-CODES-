// 3116. Kth Smallest Amount With Single Denomination Combination
// Example 1:
// Input: coins = [3,6,9], k = 3
// Output: 9
// Explanation: The given coins can make the following amounts:
// Coin 3 produces multiples of 3: 3, 6, 9, 12, 15, etc.
// Coin 6 produces multiples of 6: 6, 12, 18, 24, etc.
// Coin 9 produces multiples of 9: 9, 18, 27, 36, etc.
// All of the coins combined produce: 3, 6, 9, 12, 15, etc.
// Example 2:
// Input: coins = [5,2], k = 7
// Output: 12
// Explanation: The given coins can make the following amounts:
// Coin 5 produces multiples of 5: 5, 10, 15, 20, etc.
// Coin 2 produces multiples of 2: 2, 4, 6, 8, 10, 12, etc.
// All of the coins combined produce: 2, 4, 5, 6, 8, 10, 12, 14, 15, etc.
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> coins = {5,2};
    int k = 7;

    set<int> store;
    int n = coins.size();

    for(int i=0;i<n;i++){
        int coin = coins[i];;
        for(int j=0;j<=k;j++){
            store.insert(coin);
            coin += coins[i];
        }
    }
    int index = 0;
    for (int x : store) {
    if (index == k-1) {
        cout << x;
        break;
    }
    index++;
}
}