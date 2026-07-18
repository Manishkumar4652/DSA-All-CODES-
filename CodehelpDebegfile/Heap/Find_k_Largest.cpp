#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    priority_queue<int, vector<int>, greater<int>> pq;

    // First k elements
    for (int i = 0; i < k; i++) {
        pq.push(nums[i]);
    }

    // Remaining elements
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] > pq.top()) {
            pq.pop();
            pq.push(nums[i]);
        }
    }

    cout << "Kth Largest Element = " << pq.top();

    return 0;
}