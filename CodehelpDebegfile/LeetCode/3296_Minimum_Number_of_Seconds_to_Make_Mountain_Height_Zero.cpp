// 3296. Minimum Number of Seconds to Make Mountain Height Zero
// Example 1:
// Input: mountainHeight = 4, workerTimes = [2,1,1]
// Output: 3
// Explanation:
// One way the height of the mountain can be reduced to 0 is:
// Worker 0 reduces the height by 1, taking workerTimes[0] = 2 seconds.
// Worker 1 reduces the height by 2, taking workerTimes[1] + workerTimes[1] * 2 = 3 seconds.
// Worker 2 reduces the height by 1, taking workerTimes[2] = 1 second.
// Since they work simultaneously, the minimum time needed is max(2, 3, 1) = 3 seconds.
// Example 2:
// Input: mountainHeight = 10, workerTimes = [3,2,2,4]
// Output: 12
// Explanation:
// Worker 0 reduces the height by 2, taking workerTimes[0] + workerTimes[0] * 2 = 9 seconds.
// Worker 1 reduces the height by 3, taking workerTimes[1] + workerTimes[1] * 2 + workerTimes[1] * 3 = 12 seconds.
// Worker 2 reduces the height by 3, taking workerTimes[2] + workerTimes[2] * 2 + workerTimes[2] * 3 = 12 seconds.
// Worker 3 reduces the height by 2, taking workerTimes[3] + workerTimes[3] * 2 = 12 seconds.
// The number of seconds needed is max(9, 12, 12, 12) = 12 seconds.
// Example 3:
// Input: mountainHeight = 5, workerTimes = [1]
// Output: 15
// Explanation:
// There is only one worker in this example, so the answer is workerTimes[0] + workerTimes[0] * 2 + workerTimes[0] * 3 + workerTimes[0] * 4 + workerTimes[0] * 5 = 15.
#include<iostream>
#include<vector>
#include <algorithm>
#include <cmath>
using namespace std;
    bool Check(long long mid, vector<int>& workerTimes, int mH) {
        long long h = 0;

        for(int &t : workerTimes) {
            h += (long long)(sqrt(2.0 * mid/t + 0.25) - 0.5);

            if(h >= mH) {
                return true;
            }
        }

        return h >= mH;
    }
int main(){
    int mountainHeight = 4;
    vector<int> workerTimes = {2,1,1};
        int maxTime = *max_element(begin(workerTimes), end(workerTimes));
        long long l = 1;
        long long r = (long long)maxTime * mountainHeight * (mountainHeight+1)/2;

        long long result = 0;

        while(l <= r) {
            long long mid = l + (r-l)/2;

            if(Check(mid, workerTimes, mountainHeight)) {
                result = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        cout<< result;
    }