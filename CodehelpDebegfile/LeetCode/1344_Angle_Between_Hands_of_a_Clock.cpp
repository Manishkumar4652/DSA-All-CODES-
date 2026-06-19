// 1344. Angle Between Hands of a Clock
// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.
// Answers within 10-5 of the actual value will be accepted as correct.
// Example 1:
// Input: hour = 12, minutes = 30
// Output: 165
// Example 2:
// Input: hour = 3, minutes = 30
// Output: 75
// Example 3:
// Input: hour = 3, minutes = 15
// Output: 7.5
#include<iostream>
using namespace std;
int main(){
    int hour = 1;
    int minutes = 57;

    float ans = (30*hour - 5.5*minutes);
    if(ans < 0){
        ans = -ans;
        if(ans > 180){
            cout<<360-ans;
        }
        else{
            cout<<-ans;
        }
    }

    if(ans > 180){
        cout<<360-ans;
    }
    else{
        cout<<ans;
    }

}