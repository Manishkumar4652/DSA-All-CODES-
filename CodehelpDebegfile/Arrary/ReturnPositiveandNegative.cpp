#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,-2,3,-5,4};
    int n = arr.size();
    int positive = 0;
    int negative = 0;

    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            positive += arr[i];
        }

        else if(arr[i] < 0){
            negative += arr[i];
        }
    }
        cout<<positive<<" "<<negative;


}