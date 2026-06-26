#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool explore(pair<int,int>& front, pair<int,int>& dest,
                 queue<pair<int,int>>& q,
                 vector<vector<bool>>& vis, int &N) {
        
        int x[] = {-1, -1, 1, 1, 2, 2, -2, -2};
        int y[] = {2, -2, 2, -2, 1, -1, 1, -1};

        for(int i = 0; i < 8; i++) {
            int newX = front.first + x[i];
            int newY = front.second + y[i];

            // Out of bounds or already visited
            if(newX < 0 || newX >= N || newY < 0 || newY >= N || vis[newX][newY])
                continue;

            // Destination found
            if(make_pair(newX, newY) == dest)
                return true;

            q.push({newX, newY});
            vis[newX][newY] = true;
        }
        return false;
    }

    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        pair<int,int> src = {KnightPos[0] - 1, KnightPos[1] - 1};
        pair<int,int> dest = {TargetPos[0] - 1, TargetPos[1] - 1};

        if(src == dest) return 0;

        queue<pair<int,int>> q;
        q.push(src);
        q.push({-1, -1}); // level marker

        vector<vector<bool>> vis(N, vector<bool>(N, false));
        vis[src.first][src.second] = true;

        int step = 1;

        while(!q.empty()) {
            auto front = q.front();
            q.pop();

            if(front == make_pair(-1, -1)) {
                step++;
                if(!q.empty())
                    q.push({-1, -1});
            } 
            else {
                if(explore(front, dest, q, vis, N))
                    return step;
            }
        }
        return -1;
    }
};

int main() {
    int N;
    cout << "Enter board size: ";
    cin >> N;

    vector<int> KnightPos(2), TargetPos(2);

    cout << "Enter Knight Position (row col): ";
    cin >> KnightPos[0] >> KnightPos[1];

    cout << "Enter Target Position (row col): ";
    cin >> TargetPos[0] >> TargetPos[1];

    Solution obj;
    int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);

    cout << "Minimum steps: " << ans << endl;

    return 0;
}