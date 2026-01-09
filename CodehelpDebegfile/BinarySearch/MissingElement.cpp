

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {0,1,2,4,5,6,7,8,9};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans = n;

    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == mid){
            s = mid + 1;
        }
        else if(arr[mid] == mid + 1){
            ans = mid;
            e = mid - 1;
        }
    }
        cout<<ans<<" ";   
        
}




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Given sorted array with one missing number
    vector<int> arr = {0,1,2,4,5,6,7,8,9};
    int n = arr.size();

    // Start and end pointers for binary search
    int s = 0;
    int e = n - 1;

    int ans = n;    // Variable to store the answer (missing number)

    while (s <= e) {
        int mid = (s + e) / 2;        // Calculate mid index

        // If value matches index, missing number is on the right side
        if (arr[mid] == mid) {
            s = mid + 1;
        }
        // If value is greater than index, missing number is on the left side
        else if (arr[mid] == mid + 1) {
            ans = mid;      // Possible answer found
            e = mid - 1;    // Move left
        }
    }
    // Print the missing number
    cout << ans << " ";
    return 0;
}
