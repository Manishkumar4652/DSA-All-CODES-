// Method First
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number to swap"<<endl;
    cin>>x;
    cin>>y;
     cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}

// Method Second

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number to swap"<<endl;
    cin>>x;
    cin>>y;
     cout<<x<<" "<<y<<endl;
     x = x + y;
     y = x - y;
     x = x - y;
   
    cout<<x<<" "<<y<<endl;
}