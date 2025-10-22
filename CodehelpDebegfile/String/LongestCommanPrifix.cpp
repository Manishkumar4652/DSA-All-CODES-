// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<string> arr = {"flower", "flow", "flight"};
    string ans = "";

    for(int i=0;i<arr[0].size();i++){

        char ch = arr[0][i];

        bool match = true;

        for(int j=0;j<arr.size();j++){

            // not match
            if(arr[j].size()<i || ch != arr[j][i]){
                match = false;
                break;
            }
        }

        if(match == false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    cout<<ans<<endl;
    for(auto a : ans){
        cout<<a;
    }
}