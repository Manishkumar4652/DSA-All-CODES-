#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool printEven(int a){
    return a%2 == 0;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    auto it = partition(arr.begin() , arr.end() , printEven);
    for(int a : arr){
        cout<<a<<" ";
    }
}   // Even or Odd number ko 2 parts me divede kar deta hai
    // 8 2 6 4 5 3 7 1 9 