// 1009. Complement of Base 10 Integer
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:
// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:
// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
int main(){
    int n = 5;
    vector<int> ans;
    while(n != 0){
        ans.push_back(n%2);
        n = n/2;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i] == 1){
            ans[i] = 0;
        }
        else{
            ans[i] = 1;
        }
    }
    int s = ans.size()-1;
    int sum = 0;
    int p = 0;
    for(int i=0;i<ans.size();i++){
        if(ans[i] == 1)
            sum += (1 << i);
    }
    cout<<sum<<" ";
}