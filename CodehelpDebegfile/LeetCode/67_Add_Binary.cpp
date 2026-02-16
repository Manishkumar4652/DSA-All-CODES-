// 67. Add Binary
// Example 1:
// Input: a = "11", b = "1"
// Output: "100"
// Example 2:
// Input: a = "1010", b = "1011"
// Output: "10101"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string a = "11";
    string b = "1";
    string ans = "";
    int carry = 0;
    int sum = 0;

    int i = a.size()-1;
    int j = b.size()-1;
    while(i >= 0 && j >= 0){
        sum = (a[i]-'0') + (b[j]-'0') + carry;
        if(sum > 1) carry = 1;
        else carry = 0;
        ans.push_back(sum%2 + '0');
        i--; j--;
    }
    while(i >= 0){
        sum = a[i]-'0' + carry;
        ans.push_back(sum%2+'0');
        carry = sum / 2;
        i--;       
    }
    while(j >= 0){
        sum = b[j]-'0' + carry;
        ans.push_back(sum%2+'0');
        carry = sum / 2;
        j--;      
    }

    if(carry) ans.push_back(carry+'0');
    reverse(ans.begin(),ans.end());
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
}