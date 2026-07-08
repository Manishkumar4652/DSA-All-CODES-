// 3754. Concatenate Non-Zero Digits and Multiply by Sum I
// Example 1:
// Input: n = 10203004
// Output: 12340
// Explanation:
// The non-zero digits are 1, 2, 3, and 4. Thus, x = 1234.
// The sum of digits is sum = 1 + 2 + 3 + 4 = 10.
// Therefore, the answer is x * sum = 1234 * 10 = 12340.
// Example 2:
// Input: n = 1000
// Output: 1
// Explanation:
// The non-zero digit is 1, so x = 1 and sum = 1.
// Therefore, the answer is x * sum = 1 * 1 = 1.
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n = 10203004;
    string nums = "";
    string num = to_string(n);
    // remove zeros (keep original order)
    for(size_t i = 0; i < num.size(); ++i){
        if(num[i] != '0'){
            nums += num[i];
        }
    }

    if(nums.empty()) return 0;

    //sum 
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += (nums[i]-'0');
    }
    
    //convert int
    long long nume = stoll(nums);

    int ans = nume*sum;
    cout<<ans;
}