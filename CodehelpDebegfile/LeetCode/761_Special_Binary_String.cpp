// 761. Special Binary Str
// Example 1:
// Input: s = "11011000"
// Output: "11100100"
// Explanation: The strings "10" [occuring at s[1]] and "1100" [at s[3]] are swapped.
// This is the lexicographically largest string possible after some number of swaps.
// Example 2:
// Input: s = "10"
// Output: "10"
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string solve(string &s){

    if (s.empty()) return "";

    vector<string> spcials;
    
    int start = 0;
    int sum = 0;
    
    for(int i = 0; i < s.length(); i++){
        sum += (s[i] == '1') ? 1 : -1;
    
        if(sum == 0){
            string inner = s.substr(start + 1, i - start - 1);
            spcials.push_back("1" + solve(inner) + "0");
            start = i + 1;
        }
    }

    sort(spcials.begin(), spcials.end(), greater<string>());

    string ans;
    for(string &str : spcials){
        ans += str;   // ✅ yaha fix
    }

    return ans;       // ✅ return fix
}

int main(){
    string s = "11011000";
    cout << solve(s);   // ✅ print fix
}