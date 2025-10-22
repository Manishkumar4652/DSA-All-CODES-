#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool printEven(int a){
    return a%2 == 0;
}
 // ye pta lgata hai ki 2 se divede hone vali value kitne hai
int main(){

    vector<int> arr = {11,20,40,11};
    auto it = count_if(arr.begin() , arr.end() , printEven);
    cout<<it;
}