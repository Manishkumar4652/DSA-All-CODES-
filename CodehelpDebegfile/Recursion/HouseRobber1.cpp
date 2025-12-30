#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int>&arr , int index){
    // base case
    if(index >= arr.size()){
        return 0;
    }

    // include first index or index + 2 because ak house ke baad continus 
    //dusare house me chori nhi kar sakte
    int include = arr[index] + solve(arr , index+2);

    // exclude me index + 1 se
    int exclude = 0 + solve(arr , index + 1);

    // max value ko return kar denge
    int maxi = max(include , exclude);
    return maxi;
}
int main(){
    vector<int> arr = {1,2,3,4};
    int index = 0;
    int ans = solve(arr , index);
    cout<<ans;
}




//                                   solve(0)
//                               (₹1, index 0)
//                         /                               \
//            Include → 1 + solve(2)                  Exclude → solve(1)
//                    = 5                                  = 6
//                     |                                    |
//                  solve(2)                             solve(1)
//             (₹3, index 2)                        (₹2, index 1)
//               /            \                      /             \
//    3+solve(4) = 3      solve(3)=4         2+solve(3)=6      solve(2)=4
//         |                 |                    |                |
//     solve(4)          solve(3)              solve(3)         solve(2)
//    return 0          (₹4, idx3)            (₹4, idx3)       (₹3, idx2)
//                        /     \
//                  4+solve(5)  solve(4)
//                     |          |
//                 return 0    return 0
