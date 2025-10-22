#include<iostream>
using namespace std;
void swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x,y;
    cout<<"Enter a first number ";
    cin>>x;
    cout<<"Enter a first number ";
    cin>>y;
    cout<<x<< " " <<y<<endl;
    swap(&x,&y);
    cout<<x<< " " <<y<<endl;
   

}