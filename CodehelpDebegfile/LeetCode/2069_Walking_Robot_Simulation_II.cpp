#include <iostream>
#include <vector>
using namespace std;

class Robot {
public:
    int idx = 0;
    bool moved = false;
    vector<vector<int>> pos;

    Robot(int width, int height) {

        // Bottom row
        for(int x = 0; x < width; x++){
            pos.push_back({x, 0, 0});
        }

        // Right column
        for(int y = 1; y < height; y++){
            pos.push_back({width - 1, y, 1});
        }

        // Top row
        for(int x = width - 2; x >= 0; x--){
            pos.push_back({x, height - 1, 2});
        }

        // Left column
        for(int y = height - 2; y > 0; y--){
            pos.push_back({0, y, 3});
        }

        pos[0][2] = 3; // special case
    }

    void step(int num) {
        int n = pos.size();
        idx = (idx + num) % n;

        if(idx == 0 && moved){
            pos[0][2] = 3;
        }

        moved = true;
    }

    vector<int> getPos() {
        return {pos[idx][0], pos[idx][1]};
    }

    string getDir() {
        if(!moved) return "East";

        int d = pos[idx][2];
        if(d == 0) return "East";
        else if(d == 1) return "North";
        else if(d == 2) return "West";
        else return "South";
    }
};

int main() {
    Robot robot(6, 3);

    robot.step(2);
    robot.step(2);

    vector<int> pos1 = robot.getPos();
    cout << "Position: [" << pos1[0] << ", " << pos1[1] << "]" << endl;
    cout << "Direction: " << robot.getDir() << endl;

    robot.step(2);
    robot.step(1);
    robot.step(4);

    vector<int> pos2 = robot.getPos();
    cout << "Position: [" << pos2[0] << ", " << pos2[1] << "]" << endl;
    cout << "Direction: " << robot.getDir() << endl;

    return 0;
}