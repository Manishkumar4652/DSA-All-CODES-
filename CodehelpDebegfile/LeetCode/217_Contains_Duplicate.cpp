// 217. Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,1};
    sort(arr.begin() , arr.end());
    bool check = false;
    int i = 0;
    int j = 1;
    while(j < arr.size()){
        if(arr[i] == arr[j]){
            check = true;
            break;
        }
        i++;
        j++;
    }
    if(check){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
     
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 1};
//     sort(arr.begin(), arr.end());

//     int i = 0;
//     int j = 1;
//     bool duplicate = false;

//     while (j < arr.size()) {
//         if (arr[i] == arr[j]) {
//             duplicate = true;
//             break;
//         }
//         i++;
//         j++;
//     }

//     if (duplicate)
//         cout << "Duplicate exists";
//     else
//         cout << "No duplicate";

//     return 0;
// }
