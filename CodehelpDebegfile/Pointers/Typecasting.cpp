// #include<iostream>
// using namespace std;
// int main(){
// int* ptr = new int;

// void* voidPtr = ptr;

// int* intPtr = static_cast<int*>(voidPtr);

// *intPtr = 10;

// cout << *ptr << endl; // prints 10


// }

#include<iostream>
using namespace std;
int main(){
int* p = new int; 

*p = 42;  

delete p;

cout << *p << endl; // Undefined behavior
}