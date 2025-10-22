#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    int n = arr.size();
    int target = 60;
    int s = 0;
    int e = n - 1;

    while(s <= e){
        int mid = (s+e)/2;

        if(target == arr[mid]){
            cout<<"Found Target: "<<mid;
            break;
        }

        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

}
