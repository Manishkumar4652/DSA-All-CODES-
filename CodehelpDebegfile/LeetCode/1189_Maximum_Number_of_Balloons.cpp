// 1189. Maximum Number of Balloons
// Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
// You can use each character in text at most once. Return the maximum number of instances that can be formed.
// Example 1:
// Input: text = "nlaebolko"
// Output: 1
// Example 2:
// Input: text = "loonbalxballpoon"
// Output: 2
// Example 3:
// Input: text = "leetcode"
// Output: 0
// #include<iostream>
// using namespace std;
// int main(){
//     string text = "loonbalxballpoon";
//     //"balloon"
//     int b=0,a=0,l=0,o=0,n=0;
//     for(auto ch : text){
//         if(ch == 'b') b++;
//         if(ch == 'a') a++;
//         if(ch == 'l') l++;
//         if(ch == 'o') o++;
//         if(ch == 'n') n++;
//     }
// }

#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    string text = "loonbalxballpoon";
    int mini = INT_MAX;

    unordered_map<char, int> freq;

    // sirf b,a,l,o,n ke liye initialize
    freq['b'] = 0;
    freq['a'] = 0;
    freq['l'] = 0;
    freq['o'] = 0;
    freq['n'] = 0;

    // count frequency
    for(char ch : text) {
        if(freq.find(ch) != freq.end()) {
            freq[ch]++;
        }
    }

    freq['l'] /=2; 
    freq['o'] /=2; 

    for(auto it : freq) {
        mini = min(mini , it.second);
    }

    cout<<mini;
}