// 3713. Longest Balanced Substring I
// Example 1:
// Input: s = "abbac"
// Output: 4
// Explanation:
// The longest balanced substring is "abba" because both distinct characters 'a' and 'b' each appear exactly 2 times.
// Example 2:
// Input: s = "zzabccy"
// Output: 4
// Explanation:
// The longest balanced substring is "zabc" because the distinct characters 'z', 'a', 'b', and 'c' each appear exactly 1 time.​​​​​​​
// Example 3:
// Input: s = "aba"
// Output: 2
// Explanation:
// ​​​​​​​One of the longest balanced substrings is "ab" because both distinct characters 'a' and 'b' each appear exactly 1 time. Another longest balanced substring is "ba".
#include<iostream>
#include<vector>
using namespace std;
bool maxfreq(vector<int>&freq){
    int comman = 0;
    for(int k=0;k<26;k++){
        if(freq[k] == 0) continue;
        if(comman == 0)
            comman = freq[k];
        else if(freq[k] != comman){
        return false;    
        } 
    }

    return true;
}
int main(){
    string s = "zzabccy";
    int n = s.size();
    int maxl = 0;

    for(int i=0;i<n;i++){
        vector<int> freq(26,0);

        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;

            if(maxfreq(freq)){
                maxl = max(maxl,j-i+1);
            }
        }
    }
    cout<<maxl;
}