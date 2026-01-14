#include<iostream>
using namespace std;
int main(){
    int arr[100] = {0};
    // anagram  True
    // targen   False
    string s = "anagram";
    string t = "anagram";

    //--> For string s
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        arr[ch]++;
    }

    //--> For string t
    for(int i=0;i<t.length();i++){
        char ch = t[i];
        arr[ch]--;
    }

    // Check all occurence are 0 or not
    for(int i=0;i<100;i++){
        if(arr[i] != 0){
           cout<<"False";
            return 0;
             
        }

    }
            cout<<"True";
             return 0;
}


class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        // Frequency array for characters
        int freq[26] = {0};

        // Count frequency of each character in string s
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        // Decrease frequency using string t
        for (int i = 0; i < t.length(); i++) {
            freq[t[i] - 'a']--;
        }
        // Check if all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }
        // If all counts are zero, strings are anagrams
        return true;
    }
};
