#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> arr , int n , int index){
    
    //Base case
    if(index >= n){
        return true;
    }
    // Process
    if(arr[index] > arr[index+1]){
        return false;
    }
    // Recursive call
    return solve(arr , n , index+1);

}
    int main(){
        vector<int> arr = {1,2,3,4,5};
        int n = arr.size();
        int index = 0;
        bool result = solve(arr , n-1 , index);
        if(result){
            cout<<"Array is sorted"<<endl;
        }
        else{
            cout<<"Array is not sorted"<<endl;
        }
}
