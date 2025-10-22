#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printDouble(int a){
    cout<< a*2 << " ";
}
int main(){

    vector<int> arr = {1,2,3,4,5,6};

    for_each(arr.begin() , arr.end(),printDouble);
    
}