#include<iostream>
using namespace std;
int vailPermuta(string&s,int i){
    //base case
    if(i == s.length()){
        cout<<s<<" ";
        return 0;
    }

    for(int j=i;j<s.length();j++){

        swap(s[i],s[j]);

        vailPermuta(s,i+1);

        swap(s[i],s[j]);
    }
}
int main(){
    string s = "abc";
    int i=0;
    vailPermuta(s,i);
}