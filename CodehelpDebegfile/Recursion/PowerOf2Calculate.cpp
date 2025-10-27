#include<iostream>
using namespace std;
int PowerCal(int a){
    //Base case
    if(a == 0) return 1;
    //Process case
    int recursionans = PowerCal(a - 1); // Calling Function
    int ans = 2 * recursionans;
    return ans;
}
int main(){
   cout<<PowerCal(5);
}