#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(4);

    int size = arr.size();
    sort(arr.begin() , arr.end());
    int start = 0;
    int end = size - 1;
    while(start <= end){
    if(start == end){
        cout << arr[start] << " ";
    } else {
        cout << arr[start] << " " << arr[end] << " ";
    }
    start++;
    end--;
    }

}
