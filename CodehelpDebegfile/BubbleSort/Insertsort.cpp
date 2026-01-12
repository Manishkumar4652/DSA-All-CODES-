#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    // Loop starts from index 0 to n-1
    for (int i = 0; i < n; i++) {
        // Store the current element
        int key = arr[i];

        // j is used to compare with previous elements
        int j = i - 1;

        // Shift elements of the sorted part to the right
        // until the correct position for key is found
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to right
            j--;
        }

        // Place key at its correct position
        arr[j + 1] = key;
    }

    // Print the sorted array
    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}
