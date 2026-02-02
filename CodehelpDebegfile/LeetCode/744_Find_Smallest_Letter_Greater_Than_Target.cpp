// 744. Find Smallest Letter Greater Than Target
// Example 1:
// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
// Example 2:
// Input: letters = ["c","f","j"], target = "c"
// Output: "f"
// Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.
// Example 3:
// Input: letters = ["x","x","y","y"], target = "z"
// Output: "x"
// Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> arr = {'c','f','j'};
    char target = 'a';

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > target){
            cout << arr[i];
            return 0;
        }
    }
    cout << arr[0];
}
