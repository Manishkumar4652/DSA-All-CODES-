// 3024. Type of Triangl
// You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.
// A triangle is called equilateral if it has all sides of equal length.
// A triangle is called isosceles if it has exactly two sides of equal length.
// A triangle is called scalene if all its sides are of different lengths.
// Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.
// Input: nums = [3,3,3]
// Output: "equilateral"
// Explanation: Since all the sides are of equal length, therefore, it will form an equilateral triangle.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,5,4};
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    //condition is vaild triangle
    if(a+b<=c && b+c<=a && a+c<=b){
        cout<<"none";
    }
    if(a==b && b==c && c==a){
        cout<<"equilateral";
    }
    else if(a==b && b==c){
        cout<<"isosceles";
    }
    else{
        cout<<"scalene";
    }
}