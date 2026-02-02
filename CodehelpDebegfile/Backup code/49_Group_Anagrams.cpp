// 49. Group Anagrams
// Example 1:
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Explanation:
// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:
// Input: strs = [""]
// Output: [[""]]
// Example 3:
// Input: strs = ["a"]
// Output: [["a"]]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<string> arr = {"eat","tea","tan","ate","nat","bat"};
    vector<string> brr;
    vector<vector<string>> ans;

    // step 1: arr copy into brr (original words)
    for(int i = 0; i < arr.size(); i++){
        brr.push_back(arr[i]);
    }

    // step 2: sort each string in arr (for comparison)
    for(int i = 0; i < arr.size(); i++){
        sort(arr[i].begin(), arr[i].end());
    }

    vector<bool> used(arr.size(), false);

    // step 3: grouping
    for(int i = 0; i < arr.size(); i++){
        if(used[i]) continue;

        vector<string> output;
        output.push_back(brr[i]);
        used[i] = true;

        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                output.push_back(brr[j]);
                used[j] = true;
            }
        }
        ans.push_back(output);
    }

    // print answer
    for(auto v : ans){
        cout << "[ ";
        for(auto s : v){
            cout << s << " ";
        }
        cout << "]\n";
    }
}




#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < strs.size(); i++) {
        string key = strs[i];     // copy
        sort(key.begin(), key.end()); // sort copy
        mp[key].push_back(strs[i]);   // original word
    }

    vector<vector<string>> ans;
    for (auto it : mp) {
        ans.push_back(it.second);
    }

    // print result
    for (auto v : ans) {
        cout << "[ ";
        for (auto s : v) {
            cout << s << " ";
        }
        cout << "]\n";
    }
}



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];         // copy
            sort(key.begin(), key.end()); // sort copy
            mp[key].push_back(strs[i]);   // original word
        }

        vector<vector<string>> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};