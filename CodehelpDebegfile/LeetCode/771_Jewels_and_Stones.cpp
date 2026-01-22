// 771. Jewels and Stones
// Example 1:
// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3
// Example 2:
// Input: jewels = "z", stones = "ZZ"
// Output: 0

#include<iostream>
using namespace std;
int main(){
    string jewels = "aA";
    string stones = "aAAbbbb";
    int count = 0;

    for(int i=0;i<stones.length();i++){
        for(int j=0;j<jewels.length();j++){
            if(stones[i] == jewels[j]){
                count++;
            }
        }
    }
        cout<<count;
}