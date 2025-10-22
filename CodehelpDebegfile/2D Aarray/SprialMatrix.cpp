#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{1,2,4,2}
                   ,{4,5,6,2}
                   ,{7,8,9,2}
                   ,{3,6,4,8}};
    int n = 4;
    int m = 4;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow  = n - 1;
    int endingcol  = m - 1;

    while(startingrow <= endingrow && startingcol <= endingcol){

        if(startingrow <= endingrow){
            for(int col=startingcol;col<=endingcol;col++){
                cout<<arr[startingrow][col];
            }
            startingrow++;
        }

        if(startingcol <= endingcol){
            for(int row=startingrow;row<=endingrow;row++){
                cout<<arr[row][endingcol];
            }
            endingcol--;
        }

        if(startingrow <= endingrow){
            for(int col=endingcol;col>=startingcol;col--){
                cout<<arr[endingrow][col];
            }
            endingrow--;
        }

        if(startingcol <= endingcol){
            for(int row=endingrow;row>=startingrow;row--){
                cout<<arr[row][startingcol];
            }
            startingcol++;
        }
    }
 
}