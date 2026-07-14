// 1331. Rank Transform of an Array
// Example 1:
// Input: arr = [40,10,20,30]
// Output: [4,1,2,3]
// Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.
// Example 2:
// Input: arr = [100,100,100]
// Output: [1,1,1]
// Explanation: Same elements share the same rank.
// Example 3:
// Input: arr = [37,12,28,9,100,56,80,5,12]
// Output: [5,3,4,2,8,6,7,1,3]

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {40,10,20,30};

    vector<int> temp = arr;
    sort(temp.begin(), temp.end());

    unordered_map<int, int> rank;
    int r = 1;

    // Assign rank to unique elements
    for (int i = 0; i < temp.size(); i++) {
        if (rank.find(temp[i]) == rank.end()) {
            rank[temp[i]] = r++;
        }
    }

    // Replace elements with their rank
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = rank[arr[i]];
    }

    // Print answer
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}