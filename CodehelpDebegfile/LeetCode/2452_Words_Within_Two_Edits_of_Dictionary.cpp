// 2452_Words_Within_Two_Edits_of_Dictionary.cpp
// You are given two string arrays, queries and dictionary. All words in each array comprise of lowercase English letters and have the same length.
// In one edit you can take a word from queries, and change any letter in it to any other letter. Find all words from queries that, after a maximum of two edits, equal some word from dictionary.
// Return a list of all words from queries, that match with some word from dictionary after a maximum of two edits. Return the words in the same order they appear in queries.
// Example 1:
// Input: queries = ["word","note","ants","wood"], dictionary = ["wood","joke","moat"]
// Output: ["word","note","wood"]
// Explanation:
// - Changing the 'r' in "word" to 'o' allows it to equal the dictionary word "wood".
// - Changing the 'n' to 'j' and the 't' to 'k' in "note" changes it to "joke".
// - It would take more than 2 edits for "ants" to equal a dictionary word.
// - "wood" can remain unchanged (0 edits) and match the corresponding dictionary word.
// Thus, we return ["word","note","wood"].
// Example 2:
// Input: queries = ["yes"], dictionary = ["not"]
// Output: []
// Explanation:
// Applying any two edits to "yes" cannot make it equal to "not". Thus, we return an empty array.

// Constraints:
// 1 <= queries.length, dictionary.length <= 100
// n == queries[i].length == dictionary[j].length
// 1 <= n <= 100
// All queries[i] and dictionary[j] are composed of lowercase English letters.

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <unordered_set>
using namespace std;
int main(){
    vector<string> queries = {"word","note","ants","wood"};
    vector<string> dectionary = {"wood","joke","moat"};
    vector<string> ans;
    int nq = queries.size();
    int nd = dectionary.size();
    int step = 0;

    for(int i=0;i<nq;i++){

        for(int j=0;j<nd;j++){
            step = 0;

            int w1 = queries[i].size();
            int w2 = dectionary[j].size();

            for(int k=0;k<w1;k++){
                //for(int l=0;l<w2;l++){
                    if(queries[i][k] != dectionary[j][k]) step++;
                //}
            }

            if(step <= 2){
                ans.push_back(queries[i]);
                break;
            }
        }
    }
    for(auto a:ans){
        cout<<a<<" ";
    }
}