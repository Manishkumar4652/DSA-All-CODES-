// 1888. Minimum Number of Flips to Make the Binary String Alternating
// Example 1:
// Input: s = "111000"
// Output: 2
// Explanation: Use the first operation two times to make s = "100011".
// Then, use the second operation on the third and sixth elements to make s = "101010".
// Example 2:
// Input: s = "010"
// Output: 0
// Explanation: The string is already alternating.
// Example 3:
// Input: s = "1110"
// Output: 1
// Explanation: Use the second operation on the second element to make s = "1010".

// Time complexity is O(n)2
#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

int checkAlternate(string s){
    int n = s.size();
    int change1 = 0;
    int change2 = 0;

    for(int i=0;i<n;i++){

        // pattern 0101
        if(i % 2 == 0){
            if(s[i] != '0') change1++;
        }
        else{
            if(s[i] != '1') change1++;
        }

        // pattern 1010
        if(i % 2 == 0){
            if(s[i] != '1') change2++;
        }
        else{
            if(s[i] != '0') change2++;
        }
    }

    return min(change1, change2);
}

string rotateString(string s){
    char first = s[0];
    s.erase(0,1);
    s.push_back(first);
    return s;
}

int main(){

    string s = "111000";
    int n = s.size();

    int ans = INT_MAX;

    for(int i=0;i<n;i++){

        int flips = checkAlternate(s); // check
        ans = min(ans, flips);

        s = rotateString(s); // rotate
    }

    cout << ans;
}


// for leetcode O(n) 

class Solution {
public:
    int minFlips(string s) {

        int n = s.size();
        string t = s + s;

        int change1 = 0, change2 = 0;
        int ans = INT_MAX;

        for(int i = 0; i < t.size(); i++){

            // pattern 0101
            if(i % 2 == 0){
                if(t[i] != '0') change1++;
                if(t[i] != '1') change2++;
            }
            else{
                if(t[i] != '1') change1++;
                if(t[i] != '0') change2++;
            }

            // window size n maintain
            if(i >= n){
                int j = i - n;

                if(j % 2 == 0){
                    if(t[j] != '0') change1--;
                    if(t[j] != '1') change2--;
                }
                else{
                    if(t[j] != '1') change1--;
                    if(t[j] != '0') change2--;
                }
            }

            if(i >= n - 1){
                ans = min(ans, min(change1, change2));
            }
        }

        return ans;
    }
};