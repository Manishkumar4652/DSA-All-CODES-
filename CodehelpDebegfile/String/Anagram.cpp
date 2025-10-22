#include<iostream>
using namespace std;
int main(){
    int arr[500] = {0};
    // anagram  True
    // targen   False
    string s = "anagram";
    string t = "anagram";

    //--> For string s
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        arr[ch]++;
    }

    //--> For string t
    for(int i=0;i<t.length();i++){
        char ch = t[i];
        arr[ch]--;
    }

    // Check all occurence are 0 or not
    for(int i=0;i<500;i++){
        if(arr[i] != 0){
           cout<<"False";
            return 0;
             
        }

    }
            cout<<"True";
             return 0;
}