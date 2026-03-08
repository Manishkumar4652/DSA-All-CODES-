// 1980. Find Unique Binary String
// Example 1:
// Input: nums = ["01","10"]
// Output: "11"
// Explanation: "11" does not appear in nums. "00" would also be correct.
// Example 2:
// Input: nums = ["00","01"]
// Output: "11"
// Explanation: "11" does not appear in nums. "10" would also be correct.
// Example 3:
// Input: nums = ["111","011","001"]
// Output: "101"
// Explanation: "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generate(string s, int n, vector<string> &ans) {
    
    if(s.length() == n){
        ans.push_back(s);   // vector me store
        return;
    }

    // add 0
    generate(s + "0", n, ans);

    // add 1 only if previous is not 1
    if(s.empty() || s.back() != '1'){
        generate(s + "1", n, ans);
    }
}

int main() {

    vector<string> arr = {"111","011","001"};

    int n = arr[0].size();
    vector<string> ans;

    generate("", n, ans);

    // for(string x : ans){
    //     cout << x << " ";
    // }
        for(string x : ans){

        if(find(arr.begin(), arr.end(), x) == arr.end()){
            cout<<x;
            break;
        }

    }

}