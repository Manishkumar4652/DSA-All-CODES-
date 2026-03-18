// 1415. The k-th Lexicographical String of All Happy Strings of Length n
// Example 1:
// Input: n = 1, k = 3
// Output: "c"
// Explanation: The list ["a", "b", "c"] contains all happy strings of length 1. The third string is "c".
// Example 2:
// Input: n = 1, k = 4
// Output: ""
// Explanation: There are only 3 happy strings of length 1.
// Example 3:
// Input: n = 3, k = 9
// Output: "cab"
// Explanation: There are 12 different happy string of length 3 ["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]. You will find the 9th string = "cab"
#include<iostream>
#include<vector>
using namespace std;
void solve(int &n , string &curr , vector<string> &result){
    if(curr.size() == n){
        result.push_back(curr);
        return ;
    }

    for(char ch='a';ch<='c';ch++){
        if(!curr.empty() && curr.back() == ch) continue;
        //Do
        curr.push_back(ch);
    
        //Explore
        solve(n , curr , result);
    
        //Undo (Backtracting)
        curr.pop_back();
    }

}
int main(){
    int n = 5;
    int k = 9;

    string curr = "";
    vector<string> result;

    solve(n , curr , result);

    if(result.size() < k){
        cout<<"Empty";
    }
    else{
        cout<<result[k-1];
    }

}