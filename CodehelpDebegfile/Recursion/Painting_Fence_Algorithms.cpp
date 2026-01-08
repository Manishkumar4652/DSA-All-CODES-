#include<iostream>
using namespace std;
int getpaintway(int n , int k){
    if(n == 1) return k;
    if(n == 2) return k*(k-1);

    int ans = (k-1)*(getpaintway(n-1 , k)+getpaintway(n-2 , k));
    return ans;
}
int main(){
    int n = 3;// khambe
    int k = 3; // colour
    int ans = getpaintway(n , k);
    cout<<ans;
}