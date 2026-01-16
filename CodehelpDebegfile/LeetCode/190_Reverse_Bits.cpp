// 190. Reverse Bits
// Input: n = 43261596
// Output: 964176192
// Explanation:
// Integer	Binary
// 43261596	00000010100101000001111010011100
// 964176192	00111001011110000010100101000000
#include<iostream>
using namespace std;
int main(){
    int n = 43261596;
    int ans = 0;
        for(int i=0;i<=31;i++){
            int lsb = n & 1;
            int reverselsb = lsb << (31-i);
            ans = ans | reverselsb;
            n = n >> 1;
        }
    cout<<ans;
}