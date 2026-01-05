// Last Index of a Character in a String
// Example 1:
// Input:
// str = 'hello', x = 'l'
// Output:3
// Explanation:The last occurrence of 'l' is at index 3.

#include<iostream>
#include<string>
using namespace std;
int solve(string str , int n , int start , char target){
// base case
if(start == n) return -1;

if(str[start] == target){
    return start;
}
return solve(str , n , start+1 , target);
}
int main(){
    string str = "hello";
    int n = str.length();
    int start = 0;
    char target = 'l';
    int ans = solve(str , n-1 , start , target);
    cout<<ans;
}