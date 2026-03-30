// 2839. Check if Strings Can be Made Equal With Operations I
// Example 1:
// Input: s1 = "abcd", s2 = "cdab"
// Output: true
// Explanation: We can do the following operations on s1:
// - Choose the indices i = 0, j = 2. The resulting string is s1 = "cbad".
// - Choose the indices i = 1, j = 3. The resulting string is s1 = "cdab" = s2.
// Example 2:
// Input: s1 = "abcd", s2 = "dacb"
// Output: false
// Explanation: It is not possible to make the two strings equal.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s1 = "abcd";
    string s2 = "cdab";

    int n = s1.size();
    vector<char> even1 , even2 , odd1 , odd2;

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            even1.push_back(s1[i]);
            even2.push_back(s2[i]);
        }
        else{
            odd1.push_back(s1[i]);
            odd2.push_back(s2[i]);
        }
    }
    sort(even1.begin(),even1.end());
    sort(even2.begin(),even2.end());
    sort(odd1.begin(),odd1.end());
    sort(odd2.begin(),odd2.end());
 
    if(even1 == even2 && odd1 == odd2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}



//optimal O(n)
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int even[26] = {0};
        int odd[26] = {0};

        int n = s1.length();

        for(int i = 0; i < n; i++) {
            if(i%2 == 0) { //even indices
                even[s1[i] - 'a']++;
                even[s2[i] - 'a']--;
            } else { //odd indices
                odd[s1[i] - 'a']++;
                odd[s2[i] - 'a']--;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(even[i] != 0 || odd[i] != 0)
                return false;
        }

        return true;
    }
};