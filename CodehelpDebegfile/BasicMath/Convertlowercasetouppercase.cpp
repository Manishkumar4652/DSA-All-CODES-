#include<iostream>
using namespace std;
int ConvertLowerCase(char charcter){
    int contee = charcter - 32;
    // return (char)contee;
}

int main(){
    cout<<"Enter a Charcter: ";
    char charcter;
    cin>>charcter;
    char valuej = ConvertLowerCase(charcter);
    cout<<valuej;

    // char a = 'a'-32;
    // cout<<(char)a;
}