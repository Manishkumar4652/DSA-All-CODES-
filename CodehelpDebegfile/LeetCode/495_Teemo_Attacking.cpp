// 495. Teemo Attacking
// Example 1:
// Input: timeSeries = [1,4], duration = 2
// Output: 4
// Explanation: Teemo's attacks on Ashe go as follows:
// - At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
// - At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
// Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.
// Example 2:
// Input: timeSeries = [1,2], duration = 2
// Output: 3
// Explanation: Teemo's attacks on Ashe go as follows:
// - At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
// - At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
// Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> timeSeries = {1, 4};
    int duration = 2;

    set<int> ans;

    for (int i = 0; i < timeSeries.size(); i++) {

        for (int j = timeSeries[i];j < timeSeries[i] + duration;j++) {

            ans.insert(j);
        }
    }

    for (auto &p : ans) {
        cout << p << " ";
    }

    cout << "\nTotal poisoned seconds = " << ans.size();

    return 0;
}