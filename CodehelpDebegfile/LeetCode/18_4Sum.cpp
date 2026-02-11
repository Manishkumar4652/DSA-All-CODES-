// 18. 4Sum
// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:
// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    vector<vector<int>> ans;
    int target = 0;
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j=i+1;j<n;){
            int p=j+1;
            int q=n-1;

            while(p<q){
                int sum = arr[i]+arr[j]+arr[p]+arr[q];
                if(sum == target){
                    cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[p]<<" "<<arr[q]<<"]";
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++;
                    q--;
                    while(p<q && arr[p] == arr[p-1]) p++;
                    while(p<q && arr[q] == arr[q+1]) q--;
                }
                else if(sum < target) p++;
                else q--;

            }
                j++;
                while(j<n && arr[j] == arr[j-1]) j++;
        }
    }
        cout<<endl;
        for(auto a: ans){
            cout<<"[";
            for(int x:a){
                cout<<x<<" ";
            }
            cout<<"]";
        }
}