// 1722. Minimize Hamming Distance After Swap Operations
// You are given two integer arrays, source and target, both of length n. You are also given an array allowedSwaps where each allowedSwaps[i] = [ai, bi] indicates that you are allowed to swap the elements at index ai and index bi (0-indexed) of array source. Note that you can swap elements at a specific pair of indices multiple times and in any order.
// The Hamming distance of two arrays of the same length, source and target, is the number of positions where the elements are different. Formally, it is the number of indices i for 0 <= i <= n-1 where source[i] != target[i] (0-indexed).
// Return the minimum Hamming distance of source and target after performing any amount of swap operations on array source.
// Example 1:
// Input: source = [1,2,3,4], target = [2,1,4,5], allowedSwaps = [[0,1],[2,3]]
// Output: 1
// Explanation: source can be transformed the following way:
// - Swap indices 0 and 1: source = [2,1,3,4]
// - Swap indices 2 and 3: source = [2,1,4,3]
// The Hamming distance of source and target is 1 as they differ in 1 position: index 3.
// Example 2:
// Input: source = [1,2,3,4], target = [1,3,2,4], allowedSwaps = []
// Output: 2
// Explanation: There are no allowed swaps.
// The Hamming distance of source and target is 2 as they differ in 2 positions: index 1 and index 2.
// Example 3:
// Input: source = [5,1,2,4,3], target = [1,5,4,2,3], allowedSwaps = [[0,4],[4,2],[1,3],[1,4]]
// Output: 0
 
// Constraints:
// n == source.length == target.length
// 1 <= n <= 105
// 1 <= source[i], target[i] <= 105
// 0 <= allowedSwaps.length <= 105
// allowedSwaps[i].length == 2
// 0 <= ai, bi <= n - 1
// ai != bi

// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> source = {1,2,3,4};
//     vector<int> target = {2,1,4,5};
//     vector<vector<int>> allowedSwaps = {{0,1},{2,3}};

//     int step = 0;
//     int ns = source.size();
//     int nr = allowedSwaps.size();
//     int mini = INT_MAX;

//     for(int i=0;i<nr;i++){
//         int firstn = allowedSwaps[i][0];
//         int secondn = allowedSwaps[i][1];

//         swap(source[firstn],source[secondn]);

//         for(int k=0;k<ns;k++){
//             if(source[k] != target[k]){
//                 step++;
//             }
//         }
//         mini = min(mini,step);
//     }
//     cout<<mini;
// }





#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findParent(vector<int>& parent, int node) {
    if(parent[node] == node) {
        return node;
    }
    parent[node] = findParent(parent, parent[node]);
    return parent[node];
}

void unionSet(vector<int>& parent, vector<int>& rank, int a, int b) {
    int parentA = findParent(parent, a);
    int parentB = findParent(parent, b);

    if(parentA == parentB) {
        return;
    }

    if(rank[parentA] < rank[parentB]) {
        parent[parentA] = parentB;
    } else if(rank[parentA] > rank[parentB]) {
        parent[parentB] = parentA;
    } else {
        parent[parentB] = parentA;
        rank[parentA]++;
    }
}

int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
    int n = source.size();
    vector<int> parent(n);
    vector<int> rank(n, 0);

    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }

    for(auto& currentSwap : allowedSwaps) {
        unionSet(parent, rank, currentSwap[0], currentSwap[1]);
    }

    unordered_map<int, unordered_map<int, int>> groups;
    for(int i = 0; i < n; i++) {
        int root = findParent(parent, i);
        groups[root][source[i]]++;
        groups[root][target[i]]--;
    }

    int hamming_distance = 0;

    for(auto groupIt = groups.begin(); groupIt != groups.end(); ++groupIt) {
        unordered_map<int, int>& freq = groupIt->second;
        for(auto freqIt = freq.begin(); freqIt != freq.end(); ++freqIt) {
            if(freqIt->second > 0) {
                hamming_distance += freqIt->second;
            }
        }
    }
    
    return hamming_distance;
}

int main(){
    // Example 1
    cout << "Example 1: ";
    vector<int> source1 = {1,2,3,4};
    vector<int> target1 = {2,1,4,5};
    vector<vector<int>> allowedSwaps1 = {{0,1},{2,3}};
    cout << minimumHammingDistance(source1, target1, allowedSwaps1) << " (Expected: 1)" << endl;
    
    // Example 2
    cout << "Example 2: ";
    vector<int> source2 = {1,2,3,4};
    vector<int> target2 = {1,3,2,4};
    vector<vector<int>> allowedSwaps2 = {};
    cout << minimumHammingDistance(source2, target2, allowedSwaps2) << " (Expected: 2)" << endl;
    
    // Example 3
    cout << "Example 3: ";
    vector<int> source3 = {5,1,2,4,3};
    vector<int> target3 = {1,5,4,2,3};
    vector<vector<int>> allowedSwaps3 = {{0,4},{4,2},{1,3},{1,4}};
    cout << minimumHammingDistance(source3, target3, allowedSwaps3) << " (Expected: 0)" << endl;
    
    return 0;
}
