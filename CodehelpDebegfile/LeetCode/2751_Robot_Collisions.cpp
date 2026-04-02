// 2751. Robot Collisions
// Example 1:
// Input: positions = [5,4,3,2,1], healths = [2,17,9,15,10], directions = "RRRRR"
// Output: [2,17,9,15,10]
// Explanation: No collision occurs in this example, since all robots are moving in the same direction. So, the health of the robots in order from the first robot is returned, [2, 17, 9, 15, 10].
// Example 2:
// Input: positions = [3,5,2,6], healths = [10,10,15,12], directions = "RLRL"
// Output: [14]
// Explanation: There are 2 collisions in this example. Firstly, robot 1 and robot 2 will collide, and since both have the same health, they will be removed from the line. Next, robot 3 and robot 4 will collide and since robot 4's health is smaller, it gets removed, and robot 3's health becomes 15 - 1 = 14. Only robot 3 remains, so we return [14].
// Example 3:
// Input: positions = [1,2,5,6], healths = [10,10,11,11], directions = "RLRL"
// Output: []
// Explanation: Robot 1 and robot 2 will collide and since both have the same health, they are both removed. Robot 3 and 4 will collide and since both have the same health, they are both removed. So, we return an empty array, [].
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<stack>
using namespace std;
int main(){
    vector<int> positions = {3,5,2,6};
    vector<int> healths = {10,10,15,12};
    string direction = "RLRL";
    int n = positions.size();
    vector<int> indices(n);

    iota(indices.begin(),indices.end(),0); // indices arry fill 0 to n-1
    stack<int> st;

    auto lambda = [&] (int &i , int &j){
        return positions[i] < positions[j];
    };

    sort(begin(indices),end(indices),lambda);

    vector<int> result;

    for(int currentindex : indices){
        if(direction[currentindex] == 'R'){
            st.push(currentindex);
        }
        else{
            while(!st.empty() && healths[currentindex] > 0){
                int topindex = st.top();
                st.pop();

                if(healths[topindex] > healths[currentindex]){
                    healths[topindex] -= 1;
                    healths[currentindex] = 0;
                }
                else if(healths[topindex] < healths[currentindex]){
                    healths[topindex] = 0;
                    healths[currentindex] -= 1;                    
                }
                else{
                    healths[topindex] = 0;
                    healths[currentindex] = 0;                      
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        if(healths[i] > 0){
            result.push_back(healths[i]);
        }
    }
    for(int j=0;j<result.size();j++){
        cout<<"["<<result[j];
    }
        cout<<"]";
}