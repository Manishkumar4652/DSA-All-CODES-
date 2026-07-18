// Minimum Cost of Ropes
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int minCost(vector<int>& arr) {
    priority_queue<int, vector<int>, greater<int>> pq;

    // Insert all elements into min heap
    for (int i = 0; i < arr.size(); i++) {
        pq.push(arr[i]);
    }

    int totalCost = 0;

    while (pq.size() > 1) {
        int element1 = pq.top();
        pq.pop();

        int element2 = pq.top();
        pq.pop();

        int sum = element1 + element2;

        totalCost += sum;
        pq.push(sum);
    }

    return totalCost;
}

int main() {
    vector<int> arr = {4, 3, 2, 6};

    cout << "Minimum Cost = " << minCost(arr);

    return 0;
}