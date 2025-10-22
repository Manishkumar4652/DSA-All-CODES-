#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {7,2,9,6,4};
    int maxi = INT_MIN;
    int size = 5;
    for(int i=0;i<size;i++){
         maxi = max(maxi ,arr[i] );
        }
        cout<<maxi;
    }