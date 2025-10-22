#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstoccurence(vector<int> arr , int target){
    int n = arr.size(); 
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s <= e){
        int mid = (s+e)/2;

        if(target == arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{ 
            s = mid + 1;
        }
    }
    return ans;
}
int lastoccurence(vector<int> arr , int target){
    int n = arr.size(); 
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s <= e){
        int mid = (s+e)/2;

        if(target == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{ 
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {10,20,20,20,20,20,20,20,20,90};
 
    int target = 20;
   vector<int> temp;

    int first = firstoccurence(arr , target);
    int last = lastoccurence(arr , target);

    temp.push_back(first);
    temp.push_back(last);

    cout<<"["<<first<<","<<last<<"]";
    
}