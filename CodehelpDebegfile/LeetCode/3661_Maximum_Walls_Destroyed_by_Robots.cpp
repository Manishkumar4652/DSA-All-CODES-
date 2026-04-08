// 3661. Maximum Walls Destroyed by Robots
// Example 1:
// Input: robots = [4], distance = [3], walls = [1,10]
// Output: 1
// Explanation:
// robots[0] = 4 fires left with distance[0] = 3, covering [1, 4] and destroys walls[0] = 1.
// Thus, the answer is 1.
// Example 2:
// Input: robots = [10,2], distance = [5,1], walls = [5,2,7]
// Output: 3
// Explanation:
// robots[0] = 10 fires left with distance[0] = 5, covering [5, 10] and destroys walls[0] = 5 and walls[2] = 7.
// robots[1] = 2 fires left with distance[1] = 1, covering [1, 2] and destroys walls[1] = 2.
// Thus, the answer is 3.
// Example 3:
// Input: robots = [1,2], distance = [100,1], walls = [10]
// Output: 0
// Explanation
// In this example, only robots[0] can reach the wall, but its shot to the right is blocked by robots[1]; thus the answer is 0.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> robot = {10,2};
    vector<int> distance = {5,1};
    vector<int> walls = {5,2,7};

    vector<int> lable;
    
    for(int i=0;i<walls.size();i++){
        lable.push_back(walls[i]);
    }
    for(int i=0;i<walls.size();i++){
        lable.push_back(robot[i]);
    }
    int n = lable.size();
    int fi = 0;

    sort(lable.begin(),lable.end());

    for(int i=0;i<robot.size();i++){
        int ro = robot[i];

        for(int it=0;it<n;it++){
            if(lable[it] == ro){
                fi = it;
                break;
            }
        }
        int ans =0;
        //Left search
        for(int l=fi;n<=l;l--){
            
        }
    }

}