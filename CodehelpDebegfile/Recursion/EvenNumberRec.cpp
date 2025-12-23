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
    if (arr[index]%2 == 0)
    {
        return arr[index];
    }

    // Recursive call
    return isodd(arr, 8, index + 1);
}

int main()
{
    int arr[] = {3,9,7,5,1,4,7,9};
    int result = isodd(arr, 8, 0);
    cout<<"Even Number is: "<<result;
}
