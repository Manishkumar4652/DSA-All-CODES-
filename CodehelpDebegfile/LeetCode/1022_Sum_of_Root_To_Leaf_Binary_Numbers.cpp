// 1022. Sum of Root To Leaf Binary Numbers
// Example 1:
// Input: root = [1,0,1,0,1,0,1]
// Output: 22
// Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22
// Example 2:
// Input: root = [0]
// Output: 0
#include <iostream>
using namespace std;

int sumPaths(int tree[], int index, int n, int current)
{
    if (index >= n) return 0;

    // Binary number build (left shift + add bit)
    current = current * 2 + tree[index];

    // Leaf node
    if (2 * index + 1 >= n && 2 * index + 2 >= n)
        return current;

    // Left + Right sum
    return sumPaths(tree, 2 * index + 1, n, current)
         + sumPaths(tree, 2 * index + 2, n, current);
}

int main()
{
    int tree[] = {1, 0, 1, 0, 1, 0, 1};
    int n = 7;

    int result = sumPaths(tree, 0, n, 0);

    cout << "Sum = " << result;

    return 0;
}
