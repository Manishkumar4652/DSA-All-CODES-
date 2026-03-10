// 7. Reverse Integer
// Example 1:
// Input: x = 123
// Output: 321
// Example 2:
// Input: x = -123
// Output: -321
// Example 3:
// Input: x = 120
// Output: 21
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int x = 120;
    bool flag = false;
    int ans = 0;
    int digits = 0;
    if(x < 0) {flag = true; x = -x;}
    while (x != 0){
        digits = x % 10;
        // Overflow check
        if (ans > INT_MAX/10 || ans < INT_MIN/10)
            return 0;        
        ans = (ans * 10) + digits;
        x = x / 10;
    }
    if(flag) ans = ans*-1;
    cout<<ans; 
}



//leetcode solu
class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        int ans = 0;
        int digits = 0;

        if (x < 0) { 
            flag = true; 
            // x = -x;   ❌ INT_MIN ke liye dangerous
        }

        while (x != 0) {          // ⭐ x > 0 ki jagah
            digits = x % 10;

            // Overflow check
            if (ans > INT_MAX/10 || ans < INT_MIN/10)
                return 0;

            ans = (ans * 10) + digits;
            x = x / 10;
        }

        return ans;               // sign already included
    }
};
