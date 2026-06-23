// 649. Dota2 Senate
// Input: senate = "RD"
// Output: "Radiant"
// Explanation: 
// The first senator comes from Radiant and he can just ban the next senator's right in round 1. 
// And the second senator can't exercise any rights anymore since his right has been banned. 
// And in round 2, the first senator can just announce the victory since he is the only guy in the senate who can vote.
// Example 2:
// Input: senate = "RDD"
// Output: "Dire"
// Explanation: 
// The first senator comes from Radiant and he can just ban the next senator's right in round 1. 
// And the second senator can't exercise any rights anymore since his right has been banned. 
// And the third senator comes from Dire and he can ban the first senator's right in round 1. 
// And in round 2, the third senator can just announce the victory since he is the only guy in the senate who can vote.
#include<iostream>
#include <queue>
using namespace std;
int main(){
    string senate = "RDD";

    queue<int>radiantQ;
    queue<int> direQ;

        int position = 0;
        for(;position<senate.size();position++){
            char senator = senate[position];
            if(senator == 'R') radiantQ.push(position);
            if(senator == 'D') direQ.push(position);
        }

        while(!radiantQ.empty() && !direQ.empty()){
            int rFront = radiantQ.front();
            radiantQ.pop();

            int dFront = direQ.front();
            direQ.pop();

            // simulation voting
            if(rFront < dFront){
                // means R will ban D forever
                radiantQ.push(position++);
            }
            else{
                // means D will ban R forever
                direQ.push(position++);
            }
        }

        if(!radiantQ.empty()) cout<< "Radiant";
        cout<< "Dire";
}