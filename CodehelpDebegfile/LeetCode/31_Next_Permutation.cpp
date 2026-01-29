// 31. Next Permutation
// Example 1:
// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:
// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:
// Input: nums = [1,1,5]
// Output: [1,5,1]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,2,3};
    int n = arr.size();

    // 1. Find pivot
    int pivot = -1;
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] < arr[i+1]) {
            pivot = i;
            break;
        }
    }

    // 2. If no pivot, reverse whole array
    if(pivot == -1) {
        reverse(arr.begin(), arr.end());
        for(int x : arr) cout << x << " ";
        return 0;
    }

    // 3. Find element just greater than pivot
    for(int i = n-1; i > pivot; i--) {
        if(arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // 4. Reverse suffix
    reverse(arr.begin() + pivot + 1, arr.end());

    // Output
    for(int x : arr) cout << x << " ";
}
