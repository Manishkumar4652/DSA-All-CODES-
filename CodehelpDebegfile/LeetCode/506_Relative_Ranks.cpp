// 506. Relative Ranks
// You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.
// The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:
// The 1st place athlete's rank is "Gold Medal".
// The 2nd place athlete's rank is "Silver Medal".
// The 3rd place athlete's rank is "Bronze Medal".
// For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
// Return an array answer of size n where answer[i] is the rank of the ith athlete.
// Example 1:
// Input: score = [5,4,3,2,1]
// Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
// Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
// Example 2:
// Input: score = [10,3,8,9,4]
// Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
// Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].
#include<iostream>
#include<vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    vector<int> score = {5,4,3,2,1};
    int n = score.size();
    vector<pair<int, int>> indexed; // {score, original_index}

    for(int i = 0; i < n; i++){
        indexed.push_back({score[i], i});
    }

    sort(indexed.begin(), indexed.end(), greater<pair<int, int>>());

    vector<string> answer(n);
    
    for(int i = 0; i < n; i++){
        int originalIndex = indexed[i].second;
        if(i == 0){
            answer[originalIndex] = "Gold Medal";
        } else if(i == 1){
            answer[originalIndex] = "Silver Medal";
        } else if(i == 2){
            answer[originalIndex] = "Bronze Medal";
        } else {
            answer[originalIndex] = to_string(i + 1);
        }
    }

    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}