#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
bool Parcialsub(vector<int>&arr , int target , int index){
    // base case
    if(target<0 || index == arr.size()){
        return false;
    }

    if(target == 0){
        return true;
    }

    // Process
    //include me index+1 karte jayenge or target - element karte jayenge
    int include = Parcialsub(arr , target-arr[index] , index+1);

    //exclude me sirf index+1 karte jayenge
    int exclude = Parcialsub(arr , target , index+1);

    return include || exclude;
}
int main(){
    vector<int> arr = {1,5,11,5};
    int index = 0;
    int sum = accumulate(arr.begin() , arr.end(), 0);
    // odd number khbi nhi aana chahiye
    if(sum%2 != 0){
        cout << "Partition not possible";
        return 0;
    }

    int target = sum>>1;  // mid
    int ans = Parcialsub(arr , target ,index);
        if (ans)
        cout << "Partition possible";
        else
        cout << "Partition not possible";
    
}