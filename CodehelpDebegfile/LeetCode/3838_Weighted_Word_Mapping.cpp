// 3838. Weighted Word Mapping
// Example 1:
// Input: words = ["abcd","def","xyz"], weights = [5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2]
// Output: "rij"
// Explanation:
// The weight of "abcd" is 5 + 3 + 12 + 14 = 34. The result modulo 26 is 34 % 26 = 8, which maps to 'r'.
// The weight of "def" is 14 + 1 + 2 = 17. The result modulo 26 is 17 % 26 = 17, which maps to 'i'.
// The weight of "xyz" is 7 + 7 + 2 = 16. The result modulo 26 is 16 % 26 = 16, which maps to 'j'.
// Thus, the string formed by concatenating the mapped characters is "rij".
// Example 2:
// Input: words = ["a","b","c"], weights = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
// Output: "yyy"
// Explanation:
// Each word has weight 1. The result modulo 26 is 1 % 26 = 1, which maps to 'y'.
// Thus, the string formed by concatenating the mapped characters is "yyy".
// Example 3:
// Input: words = ["abcd"], weights = [7,5,3,4,3,5,4,9,4,2,2,7,10,2,5,10,6,1,2,2,4,1,3,4,4,5]
// Output: "g"
// Explanation:​​​​​​​
// The weight of "abcd" is 7 + 5 + 3 + 4 = 19. The result modulo 26 is 19 % 26 = 19, which maps to 'g'.
// Thus, the string formed by concatenating the mapped characters is "g".
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<string> words = {"a","b","c"};
    vector<int> weights = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int wsize = words.size();
    int wesize = weights.size();
    string ans = "";
    map<string,int> mp;

    for(char ch = 'a'; ch <= 'z'; ch++){
        mp[string(1, ch)] = weights[ch - 'a'];
    }

    for(int i=0; i<words.size(); i++) {
        int sum = 0;

    for(int j=0; j<words[i].size(); j++) {
        string ch(1, words[i][j]);
        sum += mp[ch];
    }

        int value = sum % 26;
        ans.push_back('z' - value);
    }

    cout << ans << endl;
}