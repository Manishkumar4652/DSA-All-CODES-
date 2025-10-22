#include<iostream>
using namespace std;
    void greet(){
        cout<<"Hey manish"<<endl;  // Infinite loop with recursion
        greet();
    }
    int main(){
    greet();
 }    


    
