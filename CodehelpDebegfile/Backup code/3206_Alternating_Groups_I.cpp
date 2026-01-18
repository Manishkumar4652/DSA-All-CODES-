// 3206. Alternating Groups I
// Example 1:
// Input: colors = [1,1,1]
// Output: 0

// Example 2:
// Input: colors = [0,1,0,0,1]
// Output: 3

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> colour = {0,1,0,0,1};
    int n = colour.size();

    int count = 0;

    for(int i=0;i<n;i++){

        int first = colour[i];
        int second = colour[(i+1) % n];
        int third = colour[(i+2) % n];

        if(first != second && second != third)  count++;
    }
        cout<<count;
}