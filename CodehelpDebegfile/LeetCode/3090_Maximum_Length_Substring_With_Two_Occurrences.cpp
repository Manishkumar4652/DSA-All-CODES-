// 3090. Maximum Length Substring With Two Occurrences
// Example 1:
// Input: s = "bcbbbcba"
// Output: 4
// Explanation:
// The folloing substring has a length of 4 and contains at most two occurrences of each character: "bcbbbcba".
// Example 2:
// Input: s = "aaaa"
// Output: 2
// Explanation:
// The following substring has a length of 2 and contains at most two occurrences of each character: "aaaa".
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s = "bcbbbcba";
    int n = s.size();
    unordered_map<char, int> mp;
    int maxLen = 0;
    int left = 0;
    
    for(int right = 0; right < n; right++){
        mp[s[right]]++;
        
        while(mp[s[right]] > 2){
            mp[s[left]]--;
            if(mp[s[left]] == 0){
                mp.erase(s[left]);
            }
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    
    cout << maxLen << endl;
    return 0;
}