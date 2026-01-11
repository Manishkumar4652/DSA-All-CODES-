// 1910. Remove All Occurrences of a Substring
// Example 1:
// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".

#include<iostream>
#include<string>
using namespace std;
string solve(string s , string part){
    //base case
    int found = s.find(part);
    if(found != string::npos){
        // iska matalab s me part mil gya hai
        //left string
        string left_part = s.substr(0 , found);
        //right string
        string right_part = s.substr(found+part.size() , s.size());

        s = left_part + right_part;

      return solve(s , part);
    }
    else{

        return s;
    }
}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    cout<<solve(s , part);
}


//Method 2
#include<iostream>
#include<string>
using namespace std;
int main(){
   string s = "daabcbaabcbc";
   string part = "abc";
    int found = s.find(part);
   while(found != string::npos){
    //part mil gya hai to usko hata do
    s.erase(found , part.size());

    found = s.find(part);
   }
   cout<<s;
}