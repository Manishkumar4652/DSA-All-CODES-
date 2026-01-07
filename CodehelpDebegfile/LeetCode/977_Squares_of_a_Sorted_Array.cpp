// 977. Squares of a Sorted Array
// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {-4,-1,0,3,10};
    int n = arr.size();
    vector<int> brr(n);
    int left = 0;
    int right = n-1;
    int index = n-1;

    while(left<=right){
        int leftsq = arr[left]*arr[left];
        int rightsq = arr[right]*arr[right];

        if(leftsq > rightsq){
            brr[index] = leftsq;
            left++;
        }
        else{
            brr[index] = rightsq;
            right--;
        }
        index--;
    }
        for(auto a:brr){
            cout<<a<<" ";
        }
}