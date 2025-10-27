#include<iostream>
using namespace std;
int CountngNum(int n){
    //Base case
    if(n == 0) return 1;
    int recursionans = CountngNum(n-1);  // Head Recursion
    cout<<n<<endl;
}
int main(){
    CountngNum(50);  // Function Calling
}