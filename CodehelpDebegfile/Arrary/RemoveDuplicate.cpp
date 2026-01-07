#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Given sorted array with duplicate elements
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    // Size of the array
    int n = arr.size();
    // New vector to store unique elements
    vector<int> brr;
    // First element is always unique in a non-empty array
    brr.push_back(arr[0]);
    // Traverse the array from second element
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1]){
            brr.push_back(arr[i]);
        }
    }
    // Print all unique elements
    for(int a : brr){
        cout << a << " ";
    }
}

