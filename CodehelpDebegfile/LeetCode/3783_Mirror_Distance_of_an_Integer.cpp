// 3783. Mirror Distance of an Integer
// Example 1:
// Input: n = 25
// Output: 27
// Explanation:
// reverse(25) = 52.
// Thus, the answer is abs(25 - 52) = 27.
// Example 2:
// Input: n = 10
// Output: 9
// Explanation:
// reverse(10) = 01 which is 1.
// Thus, the answer is abs(10 - 1) = 9.
// Example 3:
// Input: n = 7
// Output: 0
// Explanation:
// reverse(7) = 7.
// Thus, the answer is abs(7 - 7) = 0.
#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include <algorithm>
using namespace std;
// int getreverse(int n){

//     int ans = 0;
//     while(n > 0){
//         int lastdigit = n%10;
//         ans = (ans*10)+lastdigit;
//         n = n/10;
//     }

//     return ans;
// }
// int main(){
//     int n = 25;

//     int ans = abs(n-getreverse(n));

//     cout<<ans;
// }

        int main(){
        int n = 25;    
        string s = to_string(n);
        reverse(s.begin(),s.end());
        int x = stoi(s);
        cout<< (abs(x-n));
    
}