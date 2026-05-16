// 171. Excel Sheet Column Number
// Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.
// For example:
// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
// Example 1:
// Input: columnTitle = "A"
// Output: 1
// Example 2:
// Input: columnTitle = "AB"
// Output: 28
// Example 3:
// Input: columnTitle = "ZY"
// Output: 701
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string columnTitle = "AB";
    int result = 0;
    for(int i=0;i<columnTitle.size();i++){
        int n = int(columnTitle[i]-64);
        result = result*26+n;
    }
    cout<<result;
}