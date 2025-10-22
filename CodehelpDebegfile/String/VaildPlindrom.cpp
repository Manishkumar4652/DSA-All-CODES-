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
    string normalstring(string &s){
        string newstr = "";
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(isvaildcharcter(ch)){
                if(ch>='A' && ch<='Z'){
                    ch = ch - 'A' + 'a';
                }
                newstr.push_back(ch);
            }
        }
        return newstr;
    }
    // "A man, a plan, a canal: Panama"  Yes
    // "A man, a plan, a canal: "  No
    int main() {
    string s = "A man, a plan, a canal: ";
    string newstr = normalstring(s);
    
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