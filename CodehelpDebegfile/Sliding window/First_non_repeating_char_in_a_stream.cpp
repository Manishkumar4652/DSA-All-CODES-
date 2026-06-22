// First_non_repeating_char_in_a_stream
#include<iostream>
#include<queue>
#include <unordered_map>
using namespace std;
int main(){
    string s = "babbar";

    deque<char> dq;
    string ans;
    unordered_map<char,int> freq;

    for(int i=0;i<s.size();i++){
        char ch = s[i];
        freq[ch]++;
        dq.push_back(ch);

        while(!dq.empty()){

            char element = dq.front();

            //check karte hai ki front vala ans hai ki nhi
            if(freq[element] == 1){
                ans.push_back(element);
                break;
            }
            else{
                //duplicat aa gya hai
                dq.pop_front();
            }
        }
            if(dq.empty()){
                ans.push_back('#');
            }
    }

    cout<<ans;
}