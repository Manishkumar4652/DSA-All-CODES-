// 1002. Find Common Characters
// Example 1:
// Input: words = ["bella","label","roller"]
// Output: ["e","l","l"]
// Example 2:
// Input: words = ["cool","lock","cook"]
// Output: ["c","o"]

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void fillCount(string &word, int count[26]){
    for(char &ch : word){
        count[ch - 'a']++;
    }
}

int main(){
    vector<string> words = {"bella","label","roller"};
    int n = words.size();

    int count[26] = {0};

    fillCount(words[0], count);

    for(int i=1; i<n; i++){
        int tempCount[26] = {0};
        fillCount(words[i], tempCount);

        for(int j=0; j<26; j++){
            count[j] = min(count[j], tempCount[j]);
        }
    }

    for(int i=0;i<26;i++){
        while(count[i]--){
            cout << char(i + 'a') << " ";
        }
    }

}