// 46. Permutation
// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:
// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:
// Input: nums = [1]
// Output: [[1]]
#include<iostream>
#include<vector>
using namespace std;
int vailPermuta(vector<int>&s,int i){
    //base case
    if(i == s.size()){
        //cout<<s<<" ";
        cout<<"[";
        for(auto a: s){
            cout<<a<<" ";
        }
        cout<<"]";
        return 0;
    }

    for(int j=i;j<s.size();j++){

        swap(s[i],s[j]);

        vailPermuta(s,i+1);

        swap(s[i],s[j]);
    }
}
int main(){
    vector<int> s = {1,2,3};
    int i=0;
    vailPermuta(s,i);
}