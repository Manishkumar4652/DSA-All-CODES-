#include<iostream>
using namespace std;
void swap(int& x , int& y){
     int temp = x;
     x = y;
     y = temp;
}

int main(){
    int x,y;
    cout<<"Enter number to swap"<<endl;
    cin>>x;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x , y);
    cout<<x<<" "<<y<<endl;
    
}