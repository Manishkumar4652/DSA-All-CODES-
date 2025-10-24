#include<iostream>
using namespace std;
int factorial(int n){
    // Base case
    if(n==0) return 1;
    int recursionans = factorial(n-1);
    int ans = n * recursionans;
    return ans;
}
int main(){
cout<<factorial(5);
}