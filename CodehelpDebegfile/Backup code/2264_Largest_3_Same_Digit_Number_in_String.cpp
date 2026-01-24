// 2264. Largest 3-Same-Digit Number in String
// Example 1:
// Input: num = "6777133339"
// Output: "777"
// Explanation: There are two distinct good integers: "777" and "333".
// "777" is the largest, so we return "777".

// Example 2:
// Input: num = "2300019"
// Output: "000"
// Explanation: "000" is the only good integer.

// Example 3:
// Input: num = "42352338"
// Output: ""
// Explanation: No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    string num = "6777133339";
    string s = "";
    int maxi = INT_MIN;
    for(int i=0;i<num.length();i++){
        if(num[i] >= maxi && (num[i] == num[i+1]) && (num[i+1] == num[i+2])){
            maxi = num[i];
            s.push_back(maxi);
            s.push_back(num[i+1]);
            s.push_back(num[i+2]);
        }
    }
    cout<<s;

}