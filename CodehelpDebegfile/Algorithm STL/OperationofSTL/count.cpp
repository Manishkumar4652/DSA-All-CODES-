#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // coutn kar skta hai ki 4 kitne bar aa rha hai
    vector<int> arr = {4,4,3,4,5,6};
    int target = 4;

    auto it = count(arr.begin() , arr.end() , target);
    cout<<it;
}