// 3314. Construct the Minimum Bitwise Array I
// Example 1:
// Input: nums = [2,3,5,7]
// Output: [-1,1,4,3]

// Explanation:
// For i = 0, as there is no value for ans[0] that satisfies ans[0] OR (ans[0] + 1) = 2, so ans[0] = -1.
// For i = 1, the smallest ans[1] that satisfies ans[1] OR (ans[1] + 1) = 3 is 1, because 1 OR (1 + 1) = 3.
// For i = 2, the smallest ans[2] that satisfies ans[2] OR (ans[2] + 1) = 5 is 4, because 4 OR (4 + 1) = 5.
// For i = 3, the smallest ans[3] that satisfies ans[3] OR (ans[3] + 1) = 7 is 3, because 3 OR (3 + 1) = 7.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {2,3,5,7};
//     vector<int> ans;
//     bool res = false;

//     for(int i=0;i<arr.size();i++){

//         for(int x=0;x<arr[i];x++){
            
//             if((x | (x+1)) == arr[i]){
//                 ans.push_back(x);
//                 res = true;
//                 break;
//             }
//         }
//             if(!res){
//                 ans.push_back(-1);
//             }
//     }
//         for(auto a: ans){
//             cout<<a<<" ";
//         }
// }


#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 3;
    
    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b;
}

class Solution {
public:
    // Function to swap two numbers using XOR
    void xorSwap(int &a, int &b) {
        // Step 1: a becomes a ^ b
        a = a ^ b;

        // Step 2: b becomes (a ^ b) ^ b = original a
        b = a ^ b;

        // Step 3: a becomes (a ^ b) ^ a = original b
        a = a ^ b;
    }
};
