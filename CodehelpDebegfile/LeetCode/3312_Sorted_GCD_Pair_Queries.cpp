// 3312. Sorted GCD Pair Queries
// Example 1:
// Input: nums = [2,3,4], queries = [0,2,2]
// Output: [1,2,2]
// Explanation:
// gcdPairs = [gcd(nums[0], nums[1]), gcd(nums[0], nums[2]), gcd(nums[1], nums[2])] = [1, 2, 1].
// After sorting in ascending order, gcdPairs = [1, 1, 2].
// So, the answer is [gcdPairs[queries[0]], gcdPairs[queries[1]], gcdPairs[queries[2]]] = [1, 2, 2].
// Example 2:
// Input: nums = [4,4,2,1], queries = [5,3,1,0]
// Output: [4,2,1,1]
// Explanation:
// gcdPairs sorted in ascending order is [1, 1, 1, 2, 2, 4].
// Example 3:
// Input: nums = [2,2], queries = [0,0]
// Output: [2,2]
// Explanation:
// gcdPairs = [2].

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<int> store;
    int findGcd(int a, int b){
        while(b){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
int main(){
    vector<int> nums = {2,3,4};
    vector<int> queries = {0,2,2};

    int n = nums.size();
    int q = queries.size();

    //store GCD
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            store.push_back(findGcd(nums[i], nums[j]));
        }
    }

    // for(int i=0;i<store.size();i++){
    //     cout<<store[i]<<" ";
    // }

    sort(store.begin(), store.end());

    vector<int> ans;

    for(int i=0;i<q;i++){
        ans.push_back(store[queries[i]]);
    }

     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}