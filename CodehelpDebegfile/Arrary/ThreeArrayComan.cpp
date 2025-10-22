#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
// vector<int> a = {1,5,10,20,40,80};
// vector<int> b = {6,7,20,80,100};
// vector<int> c = {3,4,15,20,30,70,80,120};
vector<int> a = {3,3,3,3,3};
vector<int> b = {3,3,3,3,3,};
vector<int> c = {3,3,3,3};
int n = a.size() , m = b.size() , l = c.size();
vector<int> ans;
//set<int> st;
//int i = n-1 , j = m-1 , k = l-1;
int i = 0;
int j = 0;
int k = 0;
int last = -1; // Dulicate ko remove karne ke liye
while(i<n && j<m && k<l){
if(a[i] == b[j] && b[j] == c[k]){
    //st.insert(a[i]);
    //cout<<a[i]<<' ';
    if(last != a[i]){
        cout<<a[i]<<" ";
        last = a[i];
    }
    i++ , j++ , k++;
}
else if(a[i] < b[j]){
    i++;
}
else if(b[j] < c[k]){
    j++;      
}
else{
    k++;
}

}
// for(auto f : st){
//     ans.push_back(f);
// }
// for(int n: ans){
//     cout<<n<<" ";
//}
// for(int i=n-1;i>=0;i--){
//     for(int j=m-1;j>=0;j--){
//         for(int k=l-1;k>=0;k--){
//             if(a[i] == b[j] == c[k]){
//                 cout<<"The common element is : "<<a[i]<<endl;
                
//             }
//         }
//     }
// }
    
    
}