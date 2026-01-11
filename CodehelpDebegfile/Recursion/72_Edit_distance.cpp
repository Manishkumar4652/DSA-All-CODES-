// Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.
// You have the following three operations permitted on a word:
// Insert a character
// Delete a character
// Replace a character
// Example 1:
// Input: word1 = "horse", word2 = "ros"
// Output: 3
// Explanation: 
// horse -> rorse (replace 'h' with 'r')
// rorse -> rose (remove 'r')
// rose -> ros (remove 'e')
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int solve(string &w1 , string &w2 , int i , int j){
    //base case
    // w1 string end ho gai hai ab baki w2 string ko return kar do
    if(i >= w1.length()){
         return w2.length()-j;
    }
    // w2 string end ho gai hai ab baki w1 string ko return kar do
    if(j >= w2.length()){
         return w1.length()-j;
    }
    if(w1[i] == w2[j]){
        // i or j ko dono ke aae bada dena hai
       return solve(w1 , w2 , i+1 , j+1);
    }

    // Ab ham three oprection perform karnge
    // Insert a character
    int InsertOper = 1 + solve(w1 , w2 , i , j+1);
    // Remove a character
    int RemoveOper = 1 + solve(w1 , w2 , i+1 , j);
    // Replace a character
    int ReplaceOper = 1 + solve(w1 , w2 , i+1 , j+1);

    return min({InsertOper , RemoveOper , ReplaceOper});
    
}
int main(){
    string word1 = "horse";
    string word2 = "ros";
    int i = 0;
    int j = 0;
    int ans = solve(word1 , word2 , i , j);
    cout<<ans;
}

// Lekin time complexity exponential (O(3^n)) hai 