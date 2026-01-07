#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k;
    cout<<"Enter a Number: ";
    cin>>k;
    int siz = arr.size();
    k = k%siz;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);
    // arr.push_back(7);

  
    reverse(arr.begin() , arr.end());
    reverse(arr.begin() , arr.begin() + k);
    reverse(arr.begin() + k , arr.end());
    for(int i=0;i<siz;i++){
        cout<<arr[i]<<"  ";
    }
}