// 1356. Sort Integers by The Number of 1 Bits
// Example 1:
// Input: arr = [0,1,2,3,4,5,6,7,8]
// Output: [0,1,2,4,8,3,5,6,7]
// Explantion: [0] is the only integer with 0 bits.
// [1,2,4,8] all have 1 bit.
// [3,5,6] have 2 bits.
// [7] has 3 bits.
// The sorted array by bits is [0,1,2,4,8,3,5,6,7]
// Example 2:
// Input: arr = [1024,512,256,128,64,32,16,8,4,2,1]
// Output: [1,2,4,8,16,32,64,128,256,512,1024]
// Explantion: All integers have 1 bit in the binary representation, you should just sort them in ascending order.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comprater(int a,int b){
    int counta = __builtin_popcount(a);
    int countb = __builtin_popcount(b);
    if(counta == countb){
        return a < b;
    }
    return counta < countb;
}
int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    int n = arr.size();
    sort(arr.begin(),arr.end(),comprater);

    for(auto a:arr){
        cout<<a<<" ";
    }
}