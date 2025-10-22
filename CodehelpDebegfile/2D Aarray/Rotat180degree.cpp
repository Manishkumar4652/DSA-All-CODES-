#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr  =  {{1,2,4,2}
                                ,{4,5,6,2}
                                ,{7,8,9,2}
                                ,{3,6,4,8}};
    int size = arr.size();
    int col = arr[0].size();

    // reverse each row
    for(int i=0;i<size;i++){
        reverse(arr[i].begin() , arr[i].end());
    }
    // reverse each coulmn
    for(int i=0;i<col;i++){
        int start = 0;
        int end = size - 1;
        while(start <= end){
        swap(arr[start][i] , arr[end][i]);
        start++;
        end--;
    }
}

        for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}                   