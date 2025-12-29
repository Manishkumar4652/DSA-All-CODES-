#include<iostream>
#include<vector>
using namespace std;
void solve(string &s , int index , string output , vector<string> &ans){
    //base case
    if(index >= s.length()){
        ans.push_back(output);
        return;
    }

    // method use include or exclude 
    // include add current charcter and move to index + 1
    output.push_back(s[index]);
    solve(s , index+1 , output , ans);   // output + ch bhi kar sakte hai

    // exclude karne se phle jo element add kiya tha usko nikal dete hai
    output.pop_back();

    // exclude no add current charcter and move to index + 1
    solve(s , index+1 , output , ans);
}
int main(){
    string s = "abcdef";
    vector<string> ans; // store answer
    int index = 0;
    string output = "";
    solve(s , index , output , ans);

    // print all subsequence
    for(auto &str:ans){
        cout<<str<<" ";
    }
}