// 3756. Concatenate Non-Zero Digits and Multiply by Sum II
// Example 1:
// Input: s = "10203004", queries = [[0,7],[1,3],[4,6]]
// Output: [12340, 4, 9]
// Explanation:
// s[0..7] = "10203004"
// x = 1234
// sum = 1 + 2 + 3 + 4 = 10
// Therefore, answer is 1234 * 10 = 12340.
// s[1..3] = "020"
// x = 2
// sum = 2
// Therefore, the answer is 2 * 2 = 4.
// s[4..6] = "300"
// x = 3
// sum = 3
// Therefore, the answer is 3 * 3 = 9.
// Example 2:
// Input: s = "1000", queries = [[0,3],[1,1]]
// Output: [1, 0]
// Explanation:
// s[0..3] = "1000"
// x = 1
// sum = 1
// Therefore, the answer is 1 * 1 = 1.
// s[1..1] = "0"
// x = 0
// sum = 0
// Therefore, the answer is 0 * 0 = 0.
// Example 3:
// Input: s = "9876543210", queries = [[0,9]]
// Output: [444444137]
// Explanation:
// s[0..9] = "9876543210"
// x = 987654321
// sum = 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 45
// Therefore, the answer is 987654321 * 45 = 44444444445.
// We return 44444444445 modulo (109 + 7) = 444444137.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "10203004";
    const int MOD = 1000000007;
    vector<vector<int>> queries = {{0,7},
                                   {1,3},
                                   {4,6}};

    vector<int> answer;
    int n = queries[0].size();

    for(int i=0;i<=n;i++){

        int start = queries[i][0];
        int end = queries[i][1];

        string ans = s.substr(start, end-start+1);

        //Remove Zeros
        string store = "";
        for(int j=0;j<ans.size();j++){
            if(ans[j] != '0'){
                store += ans[j];
            }
        }
        
        long long x = stoll(store);

        //Calculate sum
        long long sum = 0;
        for(int k=0;k<ans.size();k++){
            sum += (ans[k]-'0');
        }
        
        long long a = (sum*x)%MOD;

        answer.push_back(a);
    }

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}