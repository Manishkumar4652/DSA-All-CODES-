// 1288. Remove Covered Intervals
// Example 1:
// Input: intervals = [[1,4],[3,6],[2,8]]
// Output: 2
// Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.
// Example 2:
// Input: intervals = [[1,4],[2,3]]
// Output: 1
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    vector<vector<int>> intervals = {{1,4},
                                     {3,6},
                                     {2,8}};

int m = intervals.size();
int n = intervals[0].size();

int mini = INT_MAX;

for(int i = 0; i < n; i++) {
    int maxi = -1;
    int valu = INT_MIN;

    for(int j = 0; j < m; j++) {
        if(intervals[j][i] > valu) {
            valu = intervals[j][i];
            maxi = j;
        }
    }

    mini = min(mini, maxi);
}

cout << mini;
}