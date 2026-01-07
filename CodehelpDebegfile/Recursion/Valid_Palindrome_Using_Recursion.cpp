//Valid Palindrome Using Recursion
// Example 1:
// Input: "A man, a plan, a canal: Panama"
// Output: true

#include<iostream>
#include<string>
using namespace std;
//int main(){
    bool isvaildcharcter(char ch){
        if(ch>='0' && ch<='9'){
            return true;
        }
        if(ch>='a' && ch<='z'){
            return true;
        }
        if(ch>='A' && ch<='Z'){
            return true;
        }

        return false;

    }
    string normalstring(string &s , int ini , int n){
        //base case
        if(ini > n) return "";
        string newstr = "";
            char ch = s[ini];
            if(isvaildcharcter(ch)){
                if(ch>='A' && ch<='Z'){
                    ch = ch - 'A' + 'a';
                }
                newstr.push_back(ch);
            }
            newstr += normalstring(s , ini+1 , n);
        return newstr;
    }
    // "A man, a plan, a canal: Panama"  Yes
    // "A man, a plan, a canal: "  No
    int main() {
    string s = "A man, a plan, a canal: ";
    int ini = 0;
    int n = s.size()-1;
    string newstr = normalstring(s , ini , n);
    
    int i = 0;
    int j = newstr.length()-1;

    while(i<j){
        if(newstr[i] != newstr[j]){
            cout<< "No"; return 0;
        }
        else{
            i++;
            j--;
        }
    }
        cout<<"yes"; return 0;
        
}
