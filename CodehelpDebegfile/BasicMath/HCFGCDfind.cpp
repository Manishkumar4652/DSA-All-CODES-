#include<iostream>
using namespace std;
int main(){
    int a = 2, b = 8;
    // Euclidean Algorithm using repeated subtraction
    while(a != b){
        if(a > b){
            // Subtract the smaller number from the larger one
            a = a - b;
        }
        else{
            // Subtract 'a' from 'b' if 'b' is larger
            b = b - a;
        }
    }
    // When a == b, that value is the GCD
    cout << "The GCD is: " << a;
    return 0;
}