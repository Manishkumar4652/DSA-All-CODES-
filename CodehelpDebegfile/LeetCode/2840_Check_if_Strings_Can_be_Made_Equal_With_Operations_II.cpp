// 2840. Check if Strings Can be Made Equal With Operations II
// Example 1:
// Input: s1 = "abcdba", s2 = "cabdab"
// Output: true
// Explanation: We can apply the following operations on s1:
// - Choose the indices i = 0, j = 2. The resulting string is s1 = "cbadba".
// - Choose the indices i = 2, j = 4. The resulting string is s1 = "cbbdaa".
// - Choose the indices i = 1, j = 5. The resulting string is s1 = "cabdab" = s2.
// Example 2:
// Input: s1 = "abe", s2 = "bea"
// Output: false
// Explanation: It is not possible to make the two strings equal.
// You are given two strings s1 and s2, both of length n, consisting of lowercase English letters.
// You can apply the following operation on any of the two strings any number of times:
// Choose any two indices i and j such that i < j and the difference j - i is even, then swap the two characters at those indices in the string.
// Return true if you can make the strings s1 and s2 equal, and false otherwise.
#include<iostream>
using namespace std;
int main(){
    string s1 = "abcdba";
    string s2 = "cabdab";

    int n = s1.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){

            if((j - i) % 2 == 0){
                swap(s1[i], s1[j]);

                if(s1 == s2){
                    cout << "true";
                    return 0;
                }
            }
        }
    }

    cout << "false";
}