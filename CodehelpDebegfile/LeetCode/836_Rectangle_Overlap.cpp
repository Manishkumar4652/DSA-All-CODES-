// 836. Rectangle Overlap
// An axis-aligned rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) is the coordinate of its bottom-left corner, and (x2, y2) is the coordinate of its top-right corner. Its top and bottom edges are parallel to the X-axis, and its left and right edges are parallel to the Y-axis.
// Two rectangles overlap if the area of their intersection is positive. To be clear, two rectangles that only touch at the corner or edges do not overlap.
// Given two axis-aligned rectangles rec1 and rec2, return true if they overlap, otherwise return false.
// Example 1:
// Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
// Output: true
// Example 2:
// Input: rec1 = [0,0,1,1], rec2 = [1,0,2,1]
// Output: false
// Example 3:
// Input: rec1 = [0,0,1,1], rec2 = [2,2,3,3]
// Output: false
#include <iostream>
#include <vector>
using namespace std;

bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    
    // Non-overlapping cases
    if (rec1[2] <= rec2[0] ||   // rec1 left of rec2
        rec1[0] >= rec2[2] ||   // rec1 right of rec2
        rec1[3] <= rec2[1] ||   // rec1 below rec2
        rec1[1] >= rec2[3]) {   // rec1 above rec2
        return false;
    }

    return true;
}

int main() {
    vector<int> rec1 = {0, 0, 2, 2};
    vector<int> rec2 = {1, 1, 3, 3};

    if (isRectangleOverlap(rec1, rec2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}