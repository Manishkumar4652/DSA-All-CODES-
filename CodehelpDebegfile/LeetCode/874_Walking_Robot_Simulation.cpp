// 874. Walking Robot Simulation
// Example 1:
// Input: commands = [4,-1,3], obstacles = []
// Output: 25
// Explanation:
// The robot starts at (0, 0):
// Move north 4 units to (0, 4).
// Turn right.
// Move east 3 units to (3, 4).
// The furthest point the robot ever gets from the origin is (3, 4), which squared is 32 + 42 = 25 units away.
// Example 2:
// Input: commands = [4,-1,4,-2,4], obstacles = [[2,4]]
// Output: 65
// Explanation:
// The robot starts at (0, 0):
// Move north 4 units to (0, 4).
// Turn right.
// Move east 1 unit and get blocked by the obstacle at (2, 4), robot is at (1, 4).
// Turn left.
// Move north 4 units to (1, 8).
// The furthest point the robot ever gets from the origin is (1, 8), which squared is 12 + 82 = 65 units away.
// Example 3:
// Input: commands = [6,-1,-1,6], obstacles = [[0,0]]
// Output: 36
// Explanation:
// The robot starts at (0, 0):
// Move north 6 units to (0, 6).
// Turn right.
// Turn right.
// Move south 5 units and get blocked by the obstacle at (0,0), robot is at (0, 1).
// The furthest point the robot ever gets from the origin is (0, 6), which squared is 62 = 36 units away.
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> command = {4,-1,4,-2,4};
    vector<vector<int>> obstacles = {{2,4}};

        unordered_set<string> st;
        for(vector<int>& obs : obstacles) {
            string key = to_string(obs[0]) + "_" + to_string(obs[1]);
            st.insert(key);
        }

        int x = 0;
        int y = 0;
        int maxD = 0;

        //Pointing to North
        pair<int, int> dir = {0, 1}; //N

        for(int i = 0; i < command.size(); i++) {
            if(command[i] == -2) { //left 90 degree
                dir = {-dir.second, dir.first};
            } else if(command[i] == -1) { //right 90 degree
                dir = {dir.second, -dir.first};
            } else { //move to the direction step by step
                for(int step = 0; step < command[i]; step++) {
                    int newX = x + dir.first;
                    int newY = y + dir.second;

                    string nextKey = to_string(newX) + "_" + to_string(newY);

                    if(st.find(nextKey) != st.end()) {
                        break;
                    }

                    x = newX;
                    y = newY;
                }
            }

            maxD = max(maxD, x*x + y*y);
        }

        cout<< maxD;
    
}