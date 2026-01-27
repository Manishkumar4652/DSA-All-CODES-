#include<iostream>
using namespace std;
bool issafe(char arr[3][3],int row , int col , int newX , int newY , bool visited[3][3]){
    //point inside hona or vaild cell per move kare 
    if((newX>=0 && newX<row) && (newY>=0 && newY<col) && (arr[newX][newY] == '.') && (visited[newX][newY] == false)){
        return true;
    }
    return false;
}

void solve(char arr[3][3],int row ,int col ,int srcX , int srcY , int desX , int desY , string output , bool visited[3][3]){
    // base case
    if(srcX == desX && srcY == desY){
        cout<<output;
        return;
    }
    int newX , newY;
    //movement check
    //Upper side
     newX = srcX-1;
     newY = srcY;

    if(issafe(arr,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        // baki recursion
        solve(arr,row,col,newX,newY,desX,desY,output+'U',visited);

        // jab me vapas aaunaga to usko fir se false kar dunga
        visited[newX][newY] = false;
        

    }
    //Down side
     newX = srcX+1;
     newY = srcY;

    if(issafe(arr,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        // baki recursion
        solve(arr,row,col,newX,newY,desX,desY,output+'D',visited);

        // jab me vapas aaunaga to usko fir se false kar dunga
        visited[newX][newY] = false;
        

    }
    //Left side
     newX = srcX;
     newY = srcY-1;

    if(issafe(arr,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        // baki recursion
        solve(arr,row,col,newX,newY,desX,desY,output+'L',visited);

        // jab me vapas aaunaga to usko fir se false kar dunga
        visited[newX][newY] = false;
        

    }
    //Left side
     newX = srcX;
     newY = srcY+1;

    if(issafe(arr,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        // baki recursion
        solve(arr,row,col,newX,newY,desX,desY,output+'R',visited);

        // jab me vapas aaunaga to usko fir se false kar dunga
        visited[newX][newY] = false;
        

    }
}
int main(){
    char arr[3][3] = {{'.','.','.'},
                      {'.','-','-'},
                      {'.','.','.'}};

int row = 3;
int col = 3;

int srcX = 0;
int srcY = 0;

int desX = row-1;
int desY = col-1;

string output = "";

bool visited[3][3] = {{true,false,false},
                      {false,false,false},
                      {false,false,false}};

solve(arr,row,col,srcX,srcY,desX,desY,output,visited);   
}