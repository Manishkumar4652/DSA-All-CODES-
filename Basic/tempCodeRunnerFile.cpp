#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num = 123;
    int num2 =0;
    int count = 0;
    int temp = num;

    // use count method
    while(temp > 0){
        temp /= 10;
        count++;
    }

    //use Narcissicstic
    temp = num;

    while(temp > 0){
        int digits = temp%10;
        int num2 = num2 + pow(digits , count);
        temp = temp/10;
    }
        if(num2 == num){
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }

        return 0;
}
