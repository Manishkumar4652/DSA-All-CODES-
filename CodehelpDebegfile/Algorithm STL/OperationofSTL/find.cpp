#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> arr = {1,2,3,4,5,6};
    int target = 4;

    auto it = find(arr.begin() , arr.end() , target);
    cout<<*it;
}