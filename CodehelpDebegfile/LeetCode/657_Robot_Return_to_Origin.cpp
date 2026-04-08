// 657. Robot Return to Origin
// Example 1:
// Input: moves = "UD"
// Output: true
// Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
// Example 2:
// Input: moves = "LL"
// Output: false
// Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.
#include<iostream>
using namespace std;

int main(){
    string moves = "LDRRLRUULR";
    int x = 0, y = 0;

    for(int i = 0; i < moves.size(); i++){
        if(moves[i] == 'L') x--;
        else if(moves[i] == 'R') x++;
        else if(moves[i] == 'U') y++;
        else if(moves[i] == 'D') y--;
    }

    if(x == 0 && y == 0) cout << "True";
    else cout << "False";
}