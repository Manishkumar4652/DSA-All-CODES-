// 121. Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
int solve(vector<int>&prices,int day,int&minprice,int&maxprofit){
    // base case
    if(day == prices.size()){
        return maxprofit;
    }
    // minimum price on day
    if(prices[day] < minprice){
        minprice = prices[day];
    }

    // maximum profit on day
    int todayprofit = prices[day] - minprice;
    if(todayprofit > maxprofit){
        maxprofit = todayprofit;
    }
    return solve(prices , day+1 , minprice , maxprofit);
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int minprice = INT_MAX;
    int maxprofit = INT_MIN;
    int day = 0;

    cout<<solve(prices , day , minprice , maxprofit);
}   


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;   // Minimum price so far
        int maxProfit = 0;        // Maximum profit

        // Traverse prices array
        for (int i = 0; i < prices.size(); i++) {

            // Update minimum price
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            // Calculate today's profit
            int todayProfit = prices[i] - minPrice;

            // Update maximum profit
            if (todayProfit > maxProfit) {
                maxProfit = todayProfit;
            }
        }

        return maxProfit;
    }
};
