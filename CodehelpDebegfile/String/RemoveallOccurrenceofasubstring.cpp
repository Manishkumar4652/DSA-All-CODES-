#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "ababcab";
    string part = "ab";
    while(s.find(part) != string::npos){  // iska matlab string me part mila hai
        s.erase(s.find(part) , part.length());  // npos means -1
    }
        cout<<s;
}

class Solution {
public:
    string removeOccurrences(string s, string part) {

        // Keep removing 'part' from string 's'
        // until it no longer exists
        while (s.find(part) != string::npos) {

            // Find the starting index of 'part'
            int index = s.find(part);

            // Erase 'part' from the string
            s.erase(index, part.length());
        }

        // Return the final string
        return s;
    }
};
