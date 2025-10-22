#include<iostream>
#include<string>
#include<set>
using namespace std;
int UniqElement(string s){
    set<char> window;
    int left = 0;
    int right = 0;
    int maxlen = 0;

    while(right < s.length()){

        while(window.find(s[right]) != window.end()){
            window.erase(s[left]);
            left++;
        }

        window.insert(s[right]);
        maxlen = max(maxlen , right - left + 1);
        right++;
    }

    return maxlen; //return 0;
}
int main(){
    string s = "pwwkew";
    cout<<UniqElement(s);

}
