#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int totalsumfu(vector<int> &arr){
        int totalsum = 0;
        for(int i=0;i<arr.size();i++){
        totalsum += arr[i];
    }
    return totalsum;
}
int main(){
    vector<int> arr = {2,1,-1};
    int n = arr.size();
    int tot = totalsumfu(arr);
    int leftsum = 0;
        for(int i=0;i<n;i++){
            int rightsum = tot - leftsum - arr[i];
            if(rightsum == leftsum){
                cout<<i;
            }
            leftsum += arr[i];
        }


}