#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int divisor = 5;
    int dividend = 20;
    int s = 0;
    int e = dividend;
    int ans = -1;

    while(s <= e){
        int mid = (s+e)/2;
        int product = mid * divisor;
        if(product == dividend){
            cout<<mid;
        }
        if(product < dividend){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
}