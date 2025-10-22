#include<iostream>
using namespace std;
int main(){
    int target = 7;
    int arr[][3] = {{1,2,3}
                   ,{4,5,6}
                   ,{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == target){
                cout<<"Row "<<i<<" "<<"Col "<<j;
            }
        }
          
    }

}