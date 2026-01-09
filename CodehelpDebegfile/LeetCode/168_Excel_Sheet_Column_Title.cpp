// 168. Excel Sheet Column Title
// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
// Example 1:
// Input: columnNumber = 1
// Output: "A
// Formula :->
// n = n - 1
// char = 'A' + (n % 26)
// n = n / 26

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int columnNumber = 1;
    string ans = "";
    
    while(columnNumber > 0){
        columnNumber--;
        char ch = 'A' + (columnNumber%26);
        ans.push_back(ch);
        columnNumber/=26;
    }
    reverse(ans.begin() , ans.end());
        cout<<ans;
}