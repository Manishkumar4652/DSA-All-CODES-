#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // Rotated sorted array
    vector<int> arr = {50, 60, 70, 10, 20, 30, 40};

    // Size of array
    int n = arr.size();

    // Start pointer
    int s = 0;

    // End pointer
    int e = n - 1;

    // Answer variable (currently not used)
    int ans = -1;

    // Binary Search loop
    while (s <= e) {

        // Find mid index
        int mid = (s + e) / 2;

        // Check if mid element is greater than next element
        // This condition helps to identify pivot point
        if (mid + 1 < n && arr[mid] > arr[mid + 1]) {
            cout << arr[mid] << " ";   // Print pivot element
        }

        // If left part is not sorted properly
        // then move to left side
        if (arr[mid] < arr[s]) {
            e = mid - 1;
        }
        // Otherwise move to right side
        else {
            s = mid + 1;
        }
    }

    // If pivot not found
    return -1;
}
