#include<iostream>
#include<cmath>
using namespace std;
int DecimalToBinary(int n){
    // Division Method
    int binary = 0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binary += bit * pow(10,i++);
        n = n/2;
    }
    
    return binary;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int binaryno = DecimalToBinary(n);
    cout<<binaryno;
}


// //Bitwise Opertar Method
// #include<iostream>
// #include<cmath>
// using namespace std;
// int DecimalToBinary(int n){
//     // Division Method
//     int binary = 0;
//     int i = 0;
//     while(n>0){
//         int bit = (n & 1);
//         binary = bit * pow(10,i++) + binary;
//         n = n>>1;
//     }
    
//     return binary;
// }

// int main(){
//     int n;
//     cout<<"Enter a Number: ";
//     cin>>n;
//     int binaryno = DecimalToBinary(n);
//     cout<<binaryno<<endl;
// }