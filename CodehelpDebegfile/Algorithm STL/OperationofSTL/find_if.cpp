#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool printEven(int a){
    return a%2 == 0;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6};
    auto it = find_if(arr.begin() , arr.end() , printEven);
    cout<<*it;
}