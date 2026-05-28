// 415. Add Strings
// Example 1:
// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:
// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:
// Input: num1 = "0", num2 = "0"
// Output: "0"
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    string num1 = "456";
    string num2 = "456";

    int i = num1.size() - 1;
        int j = num2.size() - 1;

        int carry = 0;

        string ans = "";

        while(i >= 0 || j >= 0 || carry) {

            int sum = 0;

            if(i >= 0) {
                sum += num1[i] - '0' + carry;
                i--;
            }

            if(j >= 0) {
                sum += num2[j] - '0' + carry;
                j--;
            }

            ans += (sum % 10) + '0';

            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        cout << ans;
        return 0;
}