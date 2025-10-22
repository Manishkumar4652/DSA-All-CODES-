// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {1,5,2,7,4};
//     int maxi = INT_MIN;
//     for(int i=0;i<5;i++){
//         maxi = max(maxi , arr[i]);
//         cout<<maxi;
//     }
// }
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // int arr[] = {1,5,2,7,4};
    vector<int>arr;
      arr.push_back(1);
      arr.push_back(5);
      arr.push_back(2);
      arr.push_back(7);
      arr.push_back(4);
    sort(arr.begin() , arr.end());
    int size = arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}