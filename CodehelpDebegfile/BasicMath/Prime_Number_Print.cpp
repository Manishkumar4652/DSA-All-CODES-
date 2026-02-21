#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 2; i <= n; i++) {   // 2 se start (1 prime nahi hota)
        bool isPrime = true;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {        // agar divide ho gaya
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}
