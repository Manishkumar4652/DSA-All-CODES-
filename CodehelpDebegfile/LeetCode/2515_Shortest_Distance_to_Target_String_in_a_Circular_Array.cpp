// 2515. Shortest Distance to Target String in a Circular Array
// Example 1:
// Input: words = ["hello","i","am","leetcode","hello"], target = "hello", startIndex = 1
// Output: 1
// Explanation: We start from index 1 and can reach "hello" by
// - moving 3 units to the right to reach index 4.
// - moving 2 units to the left to reach index 4.
// - moving 4 units to the right to reach index 0.
// - moving 1 unit to the left to reach index 0.
// The shortest distance to reach "hello" is 1.
// Example 2:
// Input: words = ["a","b","leetcode"], target = "leetcode", startIndex = 0
// Output: 1
// Explanation: We start from index 0 and can reach "leetcode" by
// - moving 2 units to the right to reach index 2.
// - moving 1 unit to the left to reach index 2.
// The shortest distance to reach "leetcode" is 1.
// Example 3:
// Input: words = ["i","eat","leetcode"], target = "ate", startIndex = 0
// Output: -1
// Explanation: Since "ate" does not exist in words, we return -1.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<string> words = {"hello","i","am","leetcode","hello"};
    string target = "hello";
    int startIndex = 1;
    int mini = INT_MAX;
    int n = words.size();

    for(int i=0;i<n;i++){
        if(words[i] == target){
            int startdist = abs(i-startIndex);
            int circuldist = n-startdist;

            mini = min(mini,min(startdist,circuldist));
        }
    }
    cout<<mini;
}