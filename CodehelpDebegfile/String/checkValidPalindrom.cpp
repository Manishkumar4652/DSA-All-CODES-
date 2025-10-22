#include<iostream>
#include<string>
using namespace std;
    bool checksalindrom(string s , int i , int j){
        while(i<=j){
            while(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int main(){
    string s = "NITINA";
    int i = 0;
    int j = s.length()-1;

        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            bool caseoneans = checksalindrom(s , i , j-1);
            bool casesecondans = checksalindrom(s , i+1 , j);
            bool finalans = caseoneans || casesecondans;
            cout<<finalans;
        }
}