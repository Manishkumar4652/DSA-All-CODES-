

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
        for(int a : arr){
            cout<<a<<" ";
        }
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    // Bubble Sort Algorithm
    // Outer loop runs n-1 times
    for (int i = 0; i < n - 1; i++) {

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - 1; j++) {
            // If current element is greater than next element
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Print sorted array
    for (int a : arr) {
        cout << a << " ";
    }
    return 0;
}
