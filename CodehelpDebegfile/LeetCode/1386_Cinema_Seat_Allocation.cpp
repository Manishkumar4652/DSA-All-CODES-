// 
// A cinema has n rows of seats, numbered from 1 to n. Each row has 10 seats, numbered from 1 to 10.
// You are given a 2D integer array reservedSeats, where reservedSeats[i] = [rowi, seati] means that seat seati in row rowi is already reserved.
// A four-person group must be assigned to four seats in the same row. The group can be seated in one of the following seat blocks:
// seats 2, 3, 4, 5
// seats 4, 5, 6, 7
// seats 6, 7, 8, 9
// A block can be used only if none of its seats are reserved. Each seat can be assigned to at most one group.
// Return an integer denoting the maximum number of four-person groups that can be assigned.
// Example 1:
// Input: n = 3, reservedSeats = [[1,2],[1,3],[1,8],[2,6],[3,1],[3,10]]
// Output: 4
// Explanation: The figure above shows an optimal allocation of four groups. Seats marked in blue are already reserved, and each set of four contiguous seats marked in orange is assigned to one group.
// Example 2:
// Input: n = 2, reservedSeats = [[2,1],[1,8],[2,6]]
// Output: 2
// Example 3:
// Input: n = 4, reservedSeats = [[4,3],[1,4],[4,6],[1,7]]
// Output: 4
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans = 0;

        // 1. Matrix banakar reserved seats ko false mark karna
        vector<vector<bool>> matrix(n, vector<bool>(10, true));
        for (int i = 0; i < reservedSeats.size(); i++) {
            int r = reservedSeats[i][0] - 1;
            
            int c = reservedSeats[i][1] - 1;
            matrix[r][c] = false;
        }

        // 2. Har row ko ek-ek karke check karna
        for (int i = 0; i < n; i++) {
            bool left = true, right = true, middle = true;

            // Check Left Block: columns 1, 2, 3, 4 (seats 2, 3, 4, 5)
            for (int j = 1; j <= 4; j++) {
                if (!matrix[i][j]) {
                    left = false;
                    break;
                }
            }

            // Check Right Block: columns 5, 6, 7, 8 (seats 6, 7, 8, 9)
            for (int j = 5; j <= 8; j++) {
                if (!matrix[i][j]) {
                    right = false;
                    break;
                }
            }

            // Check Middle Block: columns 3, 4, 5, 6 (seats 4, 5, 6, 7)
            for (int j = 3; j <= 6; j++) {
                if (!matrix[i][j]) {
                    middle = false;
                    break;
                }
            }

            // 3. Counting logic
            if (left && right) {
                ans += 2; // Left aur Right dono jagah family baith sakti hai
            } else if (left || right || middle) {
                ans += 1; // Ya to Left, ya Right, ya Middle me 1 family baith sakti hai
            }
        }

        return ans;
    }
};