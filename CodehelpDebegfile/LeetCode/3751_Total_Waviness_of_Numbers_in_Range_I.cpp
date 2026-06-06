// 3751. Total Waviness of Numbers in Range I
// Example 1:
// Input: num1 = 120, num2 = 130
// Output: 3
// Explanation:
// In the range [120, 130]:
// 120: middle digit 2 is a peak, waviness = 1.
// 121: middle digit 2 is a peak, waviness = 1.
// 130: middle digit 3 is a peak, waviness = 1.
// All other numbers in the range have a waviness of 0.
// Thus, total waviness is 1 + 1 + 1 = 3.
// Example 2:
// Input: num1 = 198, num2 = 202
// Output: 3
// Explanation:
// In the range [198, 202]:
// 198: middle digit 9 is a peak, waviness = 1.
// 201: middle digit 0 is a valley, waviness = 1.
// 202: middle digit 0 is a valley, waviness = 1.
// All other numbers in the range have a waviness of 0.
// Thus, total waviness is 1 + 1 + 1 = 3.
// Example 3:
// Input: num1 = 4848, num2 = 4848
// Output: 2
// Explanation:
// Number 4848: the second digit 8 is a peak, and the third digit 4 is a valley, giving a waviness of 2.
#include<iostream>
using namespace std;

//check waciness
int wavines = 0;
int CheckWavines(int value){
    string number = to_string(value);

    int n = number.size();

    for(int i=1;i<n-1;i++){
        //condition
        //check peak
        //left < middle > right
        if(number[i-1] < number[i] && number[i] > number[i+1]){
            wavines++;
        }
        //check vally
        //left > middle < right
        if(number[i-1] > number[i] && number[i] < number[i+1]){
            wavines++;
        }
    }
}

int main(){
    int num1 = 198;
    int  num2 = 202;

    for(int i=num1;i<=num2;i++){
        CheckWavines(i);
    }

    cout<<wavines;
}