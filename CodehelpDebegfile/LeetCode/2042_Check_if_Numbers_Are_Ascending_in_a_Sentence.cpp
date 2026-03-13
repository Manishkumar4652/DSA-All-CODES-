// 2042. Check if Numbers Are Ascending in a Sentence
// Example 1:
// example-1
// Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
// Output: true
// Explanation: The numbers in s are: 1, 3, 4, 6, 12.
// They are strictly increasing from left to right: 1 < 3 < 4 < 6 < 12.
// Example 2:
// Input: s = "hello world 5 x 5"
// Output: false
// Explanation: The numbers in s are: 5, 5. They are not strictly increasing.
// Example 3:
// example-3
// Input: s = "sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s"
// Output: false
// Explanation: The numbers in s are: 7, 51, 50, 60. They are not strictly increasing.
#include<iostream>
using namespace std;
int main(){
    string s = "hello world 5 x 5";
    int prev = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            int num = 0;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
                num = num * 10 + (s[i] - '0');  // in case 12
                i++;
            }
            if(num <= prev){
                cout << "false";
                return 0;
            }
            prev = num;
        }
    }
    cout << "true";
}