#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int ans = 0;
    int digits = 0;
    while (num > 0)
    {
        digits = num % 10;
        ans = (ans * 10) + digits;
        num = num / 10;
    }
    cout << "Reverse number is: " << ans;
}