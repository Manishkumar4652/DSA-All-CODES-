#include<iostream>
using namespace std;
void modifyValue(int a) {
    a = 100; // Changes made here won't affect the original
}

int main() {
    int num = 20;
    modifyValue(num);
    cout << "Num after modifyValue: " << num << endl; // Output: 20
    return 0;
}