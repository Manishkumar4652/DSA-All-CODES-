// 239. Sliding Window Maximum
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7
// Example 2:
// Input: nums = [1], k = 1
// Output: [1]
// First_negative_in_every_window_of_size_k
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main() {
    vector<int> window = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    deque<int> dq;
    vector<int> ans;

    // first window
    for(int i=0; i<k; i++) {
        while(!dq.empty() && window[dq.back()] <= window[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    ans.push_back(window[dq.front()]);

    // remaining windows
    for(int i=k; i<window.size(); i++) {

        // remove out of window elements
        if(!dq.empty() && dq.front() <= i-k) {
            dq.pop_front();
        }

        // remove smaller elements
        while(!dq.empty() && window[dq.back()] <= window[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        ans.push_back(window[dq.front()]);
    }

    for(int x : ans) {
        cout << x << " ";
    }
}