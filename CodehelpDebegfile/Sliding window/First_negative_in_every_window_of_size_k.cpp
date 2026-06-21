// First_negative_in_every_window_of_size_k
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    vector<int> window = {-8,2,3,-6,10};
    int k = 3;

    //process first window
    deque<int> dq;
    vector<int> ans;

    for(int i=0;i<k;i++){
        int element = window[i];
        if(element < 0){
            dq.push_back(i);
        }
    }

    //answer
    if(dq.empty()){
        ans.push_back(0);
    }
    else{
        int index = dq.front();
        int element = window[index];
        ans.push_back(element);
    }

    //process remaining window
    for(int i=k;i<window.size();i++){

        //removel
        if(k <= i-dq.front()){
            dq.pop_front();
        }

        //addition
        int element = window[i];
        if(element < 0){
            dq.push_back(i);
        }

        //answer
        if(dq.empty()){
        ans.push_back(0);
        }
        else{
        int index = dq.front();
        int element = window[index];
        ans.push_back(element);
        }        
    } 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}