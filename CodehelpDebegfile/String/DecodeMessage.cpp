#include<iostream>
#include<string>
using namespace std;
int main(){
    string message = "123";
    for(int i=0;i<message.length();i++){
        int decode;
        decode = (message[i] - '1') + 'a';
        cout<<(char)decode;
    }
}