#include<iostream>
#include<vector>
using namespace std;
int mergsortedans(vector<int>&arr1,vector<int>&arr2,int&n1 , int&n2 ,vector<int>&ans){
    int i = 0;
    int j = 0;

    //base case
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    //Remain element
    while(i < n1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j < n2){
        ans.push_back(arr2[j]);
        j++;
    }

}
int main(){
    vector<int> arr1 = {10,20,30,40};
    vector<int> arr2 = {15,25};
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;

    mergsortedans(arr1,arr2,n1,n2,ans);

    for(auto a : ans){
        cout<<a<<" ";
    }
}