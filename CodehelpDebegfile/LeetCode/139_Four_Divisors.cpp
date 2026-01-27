// 1390. Four Divisors
// Input: nums = []
// Output: 32
// Explanation: 
// 21 has 4 divisors: 1, 3, 7, 21
// 4 has 3 divisors: 1, 2, 4
// 7 has 2 divisors: 1, 7
// The answer is the sum of divisors of 21 only.
#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> arr = {21,4,7};
    vector<int> arr = {21,21};
    int sum = 0;

    for(int i=0;i<arr.size();i++){
        int n = arr[i];
        int count = 0;

        for(int j=2;j<=n-1;j++){
            if(n%j == 0){
                count++;
            }
        }
            if(count == 2){
                for(int k=1;k<=n;k++){
                    if(n%k == 0){
                        sum = sum + k;
                    }
                }
            }
        }
        cout<<sum;
}


class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;  // final answer
        
        // Traverse each number in the array
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int count = 0;  // to count number of divisors
            
            // Count divisors of n
            for (int j = 1; j <= n; j++) {
                if (n % j == 0) {
                    count++;
                }
            }
 
            // If number has exactly 4 divisors
            if (count == 4) {
                // Add all its divisors to sum
                for (int k = 1; k <= n; k++) {
                    if (n % k == 0) {
                        sum += k;
                    }
                }
            }
        }
        
        return sum;  // return total sum
    }
};
