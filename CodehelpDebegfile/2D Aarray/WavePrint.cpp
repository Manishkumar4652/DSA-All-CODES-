#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,4,2}
                              ,{4,5,6,2}
                              ,{7,8,9,2}
                              ,{3,6,4,8}};
    int n = 4;
    int m = 4;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow  = n - 1;
    int endingcol  = m - 1;
    vector<int> ans;
// Wave Print
while(startingrow <= endingrow && startingcol <= endingcol){

    if(startingcol <= endingcol){
        for(int row=startingrow;row<=endingrow;row++){
            ans.push_back(arr[row][startingcol]);
            //cout<<arr[row][startingcol];
        }
        startingcol++;
    }
    if(startingcol <= endingcol){
        for(int row=endingrow;row>=startingrow;row--){
            ans.push_back(arr[row][startingcol]);
            //cout<<arr[row][startingcol];
        }
        startingcol++;
    }
}
    for(int a : ans){
        cout<<a<<" ";
    }
}