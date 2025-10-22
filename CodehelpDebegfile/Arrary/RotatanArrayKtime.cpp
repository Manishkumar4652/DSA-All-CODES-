#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    int k;
    cout<<"Enter a Number: ";
    cin>>k;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    int size = arr.size();
    reverse(arr.begin() , arr.end());
    reverse(arr.begin() , arr.begin() + k);
    reverse(arr.begin() + k , arr.end());
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}