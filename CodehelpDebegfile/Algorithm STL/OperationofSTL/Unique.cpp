#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {11,11,22,22,33};
    auto it = unique(arr.begin() , arr.end());
    arr.erase(it ,arr.end());         // Duplicate ko remove karne ke liye
    for(int a : arr){
        cout<<a<<" ";
    }
}