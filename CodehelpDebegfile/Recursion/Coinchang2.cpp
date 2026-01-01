#include<iostream>
#include<vector>
using namespace std;
int coinchange(int amount , int index , vector<int> coin){
    // base case
    if(amount == 0){
        return 1;
    }
    //invalid case
    if(index >= coin.size()){
        return 0;
    }

    // yha jab mera amount bada hoga coin se thbi me aage jaunga  or include karunga
    int include = 0;
    if(amount >= coin[index]){

        // include karenge yani amount me se coin ko subtract karte jayenge
        include = coinchange(amount-coin[index] , index , coin);    
    }
        // yha per index+1 karunga 
        int exclude = coinchange(amount , index+1 , coin);

        int total = include + exclude;

        return total;
}
int main(){
    vector<int> coin = {1,2,5};
    int amount = 5;
    int index = 0;
    int ans = coinchange(amount , index ,coin);
    cout<<ans;
}