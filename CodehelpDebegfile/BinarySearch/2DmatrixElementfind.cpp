

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> arr = {{10,12,20,25},
                               {28,34,37,48},
                               {59,70,79,82},
                               {85,90,94,99}};
    int row = arr.size();
    int col = arr[0].size();
    int total = row * col;
    int s = 0;
    int e = total - 1;
    int target = 99;

    while(s <= e){
        int mid = (s+e)/2;

        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(arr[rowIndex][colIndex] == target){
            cout<<"["<<rowIndex<<","<<colIndex<<"]";
        }
        if(target < arr[rowIndex][colIndex]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<vector<int>> arr = {
        {10, 12, 20, 25},
        {28, 34, 37, 48},
        {59, 70, 79, 82},
        {85, 90, 94, 99}
    };
    int row = arr.size();
    int col = arr[0].size();
    int total = row * col;    // Total number of elements in the matrix

    int s = 0;
    int e = total - 1;
    int target = 99;    // Target element to search

    while (s <= e) {
        int mid = (s + e) / 2;
        // Convert 1D index to 2D row and column
        int rowIndex = mid / col;
        int colIndex = mid % col;
       
        if (arr[rowIndex][colIndex] == target) { // If target is found
            cout << "[" << rowIndex << "," << colIndex << "]";
            break;
        }
       
        if (target < arr[rowIndex][colIndex]) { // If target is smaller, move left
            e = mid - 1;
        }

        else {
            s = mid + 1;  // If target is larger, move right
        }
    }
    return 0;
}
