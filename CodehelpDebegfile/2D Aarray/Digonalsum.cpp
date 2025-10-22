#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[][4] = {{1,2,4,2}
                   ,{4,5,6,2}
                   ,{7,8,9,2}
                   ,{3,6,4,8}};
    for(int i=0;i<4;i++){
        sum = sum + arr[i][i];
    }
        for(int i=0;i<4;i++){
            sum = sum + arr[i][4-i-1];
        }
    if(4 & 1){
        sum = sum - arr[4/2][4/2];
    }   
    
        cout<<sum;
}