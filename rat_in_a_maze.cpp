#include<iostream>
using namespace std;
void printMat(int mat[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
}

bool solveMaze(char maze[][10],int m,int n,int soln[][10],int i,int j){
    if(i==n-1&&j==m-1){
            ///Print the path
            soln[i][j]=1;
            printMat(soln,n,m);
        return true;
    }
    soln[i][j]=1;

    if(j+1<m && maze[i][j+1]!='X'){
        bool milaKya = solveMaze(maze,m,n,soln,i,j+1);
        if(milaKya==true){
            return true;
        }
    }
    ///Go Down
    if(i+1<n && maze[i+1][j]!='X'){
        bool milaKya = solveMaze(maze,m,n,soln,i+1,j);
        if(milaKya==true){
            return true;
        }

    }
    ///Backtracking
    soln[i][j]=0;
    return false;
}

int main(){

    char maze[][10]={
        "00X00",
        "000X0",
        "X0000",
        "00X00",
    };
    int soln[10][10]={0};
    solveMaze(maze,5,4,soln,0,0);

return 0;
}
