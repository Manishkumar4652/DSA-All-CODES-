#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Multiply(string s){
    int digit = 0;
    for(int i=0;i<s.size();i++){
        digit = digit * 10 + (s[i] - '0');
    }
    return digit;
}
int main(){
    string a = "123";
    int first = Multiply(a);
    string b = "123";
    int second = Multiply(b);

    int mul = first * second;
    cout<<mul;

}