#include <iostream>
using namespace std;
int isodd(int arr[], int size, int index)
{
    // Base case
    if (index >= size)
    {
        return 0;
    }

    // Processing case
    if (arr[index] & 1)
    {
        return arr[index];
    }

    // Recursive call
    return isodd(arr, 8, index + 1);
}

int main()
{
    int arr[] = {2, 4, 6, 2, 8, 5, 2, 2};
    int result = isodd(arr, 8, 0);
    cout<<"Odd Number is: "<<result;
}
