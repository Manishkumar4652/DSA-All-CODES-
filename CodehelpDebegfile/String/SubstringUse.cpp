#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter charcter: ";
    getline(cin,s);
    cout<<s.substr(2)<<endl;  // stirng index number 2 se print honge
    cout<<s.substr(2,1);

}