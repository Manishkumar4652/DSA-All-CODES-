// 3867. Sum of GCD of Formed Pairs
// Input: nums = [2,6,4]
// Output: 2
// Explanation:
// Construct prefixGcd:
// i	nums[i]	mxi	prefixGcd[i]
// 0	2	2	2
// 1	6	6	6
// 2	4	6	2
// prefixGcd = [2, 6, 2]. After sorting, it forms [2, 2, 6].
// Pair the smallest and largest elements: gcd(2, 6) = 2. The remaining middle element 2 is ignored. Thus, the sum is 2.
// Example 2:
// Input: nums = [3,6,2,8]
// Output: 5
// Explanation:
// Construct prefixGcd:
// i	nums[i]	mxi	prefixGcd[i]
// 0	3	3	3
// 1	6	6	6
// 2	2	6	2
// 3	8	8	8
// prefixGcd = [3, 6, 2, 8]. After sorting, it forms [2, 3, 6, 8].
// Form pairs: gcd(2, 8) = 2 and gcd(3, 6) = 3. Thus, the sum is 2 + 3 = 5.

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
    vector<int> nums = {3,6,2,8};
    int n = nums.size();
    int maxi = nums[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi, nums[i]);
        store.push_back(findGcd(nums[i], maxi));
    }
    
    sort(store.begin(), store.end());

    int st = 0;
    int en = store.size()-1;
    int sum = 0;
    while(st < en){
        sum += findGcd(store[st], store[en]);;
        st++;
        en--;
    }
    cout<<sum;
}