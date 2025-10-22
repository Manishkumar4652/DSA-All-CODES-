// Method 1
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,1,0,1,0,1};
    int totalzero = 0;
    int totalones = 0;
       for(int i=0;i<6;i++){
        if(arr[i] == 0){
            totalzero++;
        }

        else if(arr[i] == 1){
            totalones++;
        }
    }
        fill(arr, arr + totalzero , 0);
        fill(arr + totalzero, arr + 6 , 1);

            for(int i=0;i<6;i++){
        cout<<arr[i]<<",";
    }
        
} 



// Method 2

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,0,0,1,0,1};
    int n = 0;
    int m = 5;
        while(n < m){

            if(arr[n] == 0){
                n++;
            }

            else if(arr[m] == 1){
                m--;
            }

            else {
                swap(arr[n] , arr[m]);
                n++ , m--;
            }
        }
            for(int i=0;i<6;i++){
                cout<<arr[i];
            }
    }