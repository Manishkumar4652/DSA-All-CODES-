#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> arr = {{10,20,30,40},{50,60,70,80},{51,98,75,90},{34,54,44,31}};
    int row = arr.size();
    int col = arr[0].size();
    int total = row * col;
    int s = 0;
    int e = total - 1;
    int target = 40;

    while(s <= e){
        int mid = (s+e)/2;

        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(arr[rowIndex][colIndex] == target){
            cout<<"["<<rowIndex<<","<<colIndex<<"]";
        }
        if(target < arr[rowIndex][colIndex]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

}