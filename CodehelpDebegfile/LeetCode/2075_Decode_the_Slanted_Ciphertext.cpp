// 2075. Decode the Slanted Ciphertext
// Example 1:
// Input: encodedText = "ch   ie   pr", rows = 3
// Output: "cipher"
// Explanation: This is the same example described in the problem description.
// Example 2:
// Input: encodedText = "iveo    eed   l te   olc", rows = 4
// Output: "i love leetcode"
// Explanation: The figure above denotes the matrix that was used to encode originalText. 
// The blue arrows show how we can find originalText from encodedText.
// Example 3:
// Input: encodedText = "coding", rows = 1
// Output: "coding"
// Explanation: Since there is only 1 row, both originalText and encodedText are the same.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string encodedText = "ch   ie   pr";
    int n = encodedText.size();
    int row = 3;
    int col = n/row;
    vector<vector<char>> table(row, vector<char>(col));

    int count = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            table[i][j] = encodedText[count++];
        }
    }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<table[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    string result  = "";
    // diagonal traversal
    for(int startCol = 0; startCol < col; startCol++){
        int i = 0, j = startCol;

        while(i < row && j < col){
            result += table[i][j];
            i++;
            j++;
        }
    }

    // remove trailing spaces
    while (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result << endl;
    return 0;
}