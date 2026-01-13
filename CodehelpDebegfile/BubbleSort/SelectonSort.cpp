#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i=0;i<n;i++){
        int minindex = i;
    

    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[i] , arr[minindex]);

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
    // Outer loop runs for each element
    for (int i = 0; i < n; i++) {

        // Assume current index has the minimum element
        int minindex = i;

        // Inner loop to find the minimum element
        // in the remaining unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;  // Update minimum index
            }
        }
        // Swap the found minimum element with
        // the first element of the unsorted part
        swap(arr[i], arr[minindex]);
    }
    // Print the sorted array
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}
