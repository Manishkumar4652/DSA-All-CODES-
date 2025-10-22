#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
string normalString(string &str){
    char start = 'a';
    unordered_map<char,char> mapping;
    string newstr = "";

    for(int i=0;i<str.length();i++){
        char ch = str[i];

        if(mapping.find(ch) == mapping.end()){
            mapping[ch] = start;
            start++;
        }
        newstr.push_back(mapping[ch]);
    }
    return newstr;
}
int main(){
    vector<string> word = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    vector<string> ans;

    string newpattern = normalString(pattern);

    
    for(int i=0;i<word.size();i++){
        
        string currenword = word[i];
        
    string newcurrentword = normalString(currenword);    

        if(newpattern == newcurrentword){
            ans.push_back(currenword);
        }
    }
    for(auto a : ans){
        cout<<a<<endl;
    }

}