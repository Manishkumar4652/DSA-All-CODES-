#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter first";
	cin>>a;
	cout<<"Enter second";
	cin>>b;
	cout<<"Enter third";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is greatest";
		}
		else {
		    cout<<c<<" is greatest";
		}
	}
	    if(b>c){
	        cout<<b<<" is greatest";
		}
	    else{
	        cout<<c<<" is greatest";
}
	}