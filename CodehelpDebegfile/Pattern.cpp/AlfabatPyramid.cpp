#include<iostream>
using namespace std;
int main(){
    int n =5;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= (n-i); j++) {
                cout << " ";
            }
            
            for(int j = 0; j < i; j++) {
                cout << char('A' + j);
            }
            
            for(int j = i-2; j >= 0; j--) {
                cout << char('A' + j);
            }
            
            cout << "\n";
        }
    }
