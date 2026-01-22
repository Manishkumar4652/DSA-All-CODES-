// 3516. Find Closest Person
// You are given three integers x, y, and z, representing the positions of three people on a number line:
// x is the position of Person 1.
// y is the position of Person 2.
// z is the position of Person 3, who does not move.
// Both Person 1 and Person 2 move toward Person 3 at the same speed.
// Determine which person reaches Person 3 first:
// Return 1 if Person 1 arrives first.
// Return 2 if Person 2 arrives first.
// Return 0 if both arrive at the same time.
// Return the result accordingly.

// Example 1:
// Input: x = 2, y = 7, z = 4

// Output: 1
// Explanation:
// Person 1 is at position 2 and can reach Person 3 (at position 4) in 2 steps.
// Person 2 is at position 7 and can reach Person 3 in 3 steps.
// Since Person 1 reaches Person 3 first, the output is 1.
#include<iostream>
using namespace std;
int main(){
    int x = 2;    //Persion A
    int y = 7;    //Persion B
    int z = 4;    //(Tum)

    // mere se persion A ki distance
    int perA = abs(x-z);
    
    //mere se persion B ki distance
    int perB = abs(y-z);

    if(perA < perB)  return 1;
    if(perB < perA)  return 2;
    
    if(perA == perB) return 0;
}


class Solution {
public:
    int findClosest(int x, int y, int z) {
        
        // Calculate distance of Person A from me (Z)
        int distanceA = abs(x - z);
        
        // Calculate distance of Person B from me (Z)
        int distanceB = abs(y - z);

        // If Person A is closer
        if (distanceA < distanceB) {
            return 1;
        }

        // If Person B is closer
        if (distanceB < distanceA) {
            return 2;
        }

        // If both are at the same distance
        return 0;
    }
};
