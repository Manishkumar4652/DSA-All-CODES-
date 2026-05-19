// 2540. Minimum Common Value
// Example 1:
// Input: a = [1,2,3], b = [2,4]
// Output: 2
// Explanation: The smallest element common to both arrays is 2, so we return 2.
// Example 2:
// Input: a = [1,2,3,6], b = [2,3,4,5]
// Output: 2
// Explanation: There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int i = 0;
    int j = 0;

    vector<int> a = {1,2,3,6};
    vector<int> b = {2,3,4,5};
        while(i < a.size() && j < b.size()) {

            if(a[i] == b[j]) {
                cout<< a[i];
                return 0;
            }

            else if(a[i] < b[j]) {
                i++;
            }

            else {
                j++;
            }
        }

        cout<< -1;
    }