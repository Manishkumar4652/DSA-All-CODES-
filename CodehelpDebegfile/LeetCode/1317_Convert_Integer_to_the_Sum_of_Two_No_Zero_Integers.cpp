// 1317. Convert Integer to the Sum of Two No-Zero Integers
// Example 1:
// Input: n = 2
// Output: [1,1]
// Explanation: Let a = 1 and b = 1.
// Both a and b are no-zero integers, and a + b = 2 = n.
// Example 2:
// Input: n = 11
// Output: [2,9]
// Explanation: Let a = 2 and b = 9.
// Both a and b are no-zero integers, and a + b = 11 = n.
// Note that there are other valid answers as [8, 3] that can be accepted.
#include<iostream>
#include<vector>
using namespace std;

bool noZero(int x){
    while(x > 0){
        if(x % 10 == 0)
            return false;
        x /= 10;
    }
    return true;
}

int main(){
    int n = 11;
    vector<int> arr;

    for(int i = 1; i < n; i++){
        int j = n - i;

        if(noZero(i) && noZero(j)){
            arr.push_back(i);
            arr.push_back(j);
            break;
        }
    }

    cout<<"[";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i]<<" ";
    }
    cout<<"]";
}

//leetcode solution
// class Solution {
// public:
// bool noZero(int x){
//     while(x > 0){
//         if(x % 10 == 0)
//             return false;
//         x /= 10;
//     }
//     return true;
// }
//     vector<int> getNoZeroIntegers(int n) {
//     vector<int> arr;

//     for(int i = 1; i < n; i++){
//         int j = n - i;

//         if(noZero(i) && noZero(j)){
//             arr.push_back(i);
//             arr.push_back(j);
//             break;
//         }
//     }
//     return arr;
//     }
// };
