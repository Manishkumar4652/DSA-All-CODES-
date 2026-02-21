// 762. Prime Number of Set Bits in Binary Representation
// Example 1:
// Input: left = 6, right = 10
// Output: 4
// Explanation:
// 6  -> 110 (2 set bits, 2 is prime)
// 7  -> 111 (3 set bits, 3 is prime)
// 8  -> 1000 (1 set bit, 1 is not prime)
// 9  -> 1001 (2 set bits, 2 is prime)
// 10 -> 1010 (2 set bits, 2 is prime)
// 4 numbers have a prime number of set bits.
// Example 2:
// Input: left = 10, right = 15
// Output: 5
// Explanation:
// 10 -> 1010 (2 set bits, 2 is prime)
// 11 -> 1011 (3 set bits, 3 is prime)
// 12 -> 1100 (2 set bits, 2 is prime)
// 13 -> 1101 (3 set bits, 3 is prime)
// 14 -> 1110 (3 set bits, 3 is prime)
// 15 -> 1111 (4 set bits, 4 is not prime)
// 5 numbers have a prime number of set bits.
// #include<iostream>
// using namespace std;
// int main(){
//     int left = 10;
//     int right = 15;
//     int pcount = 0;
//     int ans = 0;

//     for(int i=left;i<=right;i++){
//     int binartco = __builtin_popcount(i);
//     int j=1;
//     int pcount = 0;
//     while(j<=binartco){
//         if(binartco % j == 0){
//             pcount++;
//         }
//         j++;    
//         }
//         if(pcount == 2){
//             ans++;
//         }
//     }
//     cout<<ans;
// }


// Optimal approch
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int left = 10;
    int right = 15;
    
    int result = 0;
    unordered_set<int> primes = {2,3,5,7,11,13,17,19};

    for(int i=left;i<=right;i++){
        int bit = __builtin_popcount(i);

        if(primes.count(bit))
        result++;
    }
    cout<<result;
}