// 3014. Minimum Number of Pushes to Type Word I
// Example 1:
// Input: word = "abcde"
// Output: 5
// Explanation: The remapped keypad given in the image provides the minimum cost.
// "a" -> one push on key 2
// "b" -> one push on key 3
// "c" -> one push on key 4
// "d" -> one push on key 5
// "e" -> one push on key 6
// Total cost is 1 + 1 + 1 + 1 + 1 = 5.
// It can be shown that no other mapping can provide a lower cost.
// Example 2:
// Input: word = "xycdefghij"
// Output: 12
// Explanation: The remapped keypad given in the image provides the minimum cost.
// "x" -> one push on key 2
// "y" -> two pushes on key 2
// "c" -> one push on key 3
// "d" -> two pushes on key 3
// "e" -> one push on key 4
// "f" -> one push on key 5
// "g" -> one push on key 6
// "h" -> one push on key 7
// "i" -> one push on key 8
// "j" -> one push on key 9
// Total cost is 1 + 2 + 1 + 2 + 1 + 1 + 1 + 1 + 1 + 1 = 12.
// It can be shown that no other mapping can provide a lower cost.

#include<iostream>
using namespace std;
int main(){
    string word = "xycdefghij";
    int n = word.size();

    int ans = 0;
    int flag = 0;
    int count = 1;

    for(int i=0;i<n;i++){
        if(flag > 7){
            count++;
            flag = 0;
        }
        ans += count;
        flag++;
    }
    cout<<ans;
}