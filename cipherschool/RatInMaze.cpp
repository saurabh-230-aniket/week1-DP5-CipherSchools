/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int xm = {0,0,1,-1};
int ym = {1,-1,0,0};
bool issafe(vector<vector<int>>& mat,vector<vector<bool>>& vis,int x,int y,int &r,int &c){
    return ((x>=0 and x<r and y>=0 and y<c and !vis[x][y] and mat[x][y]==1));
}
bool ratinamaze(vector<vector<int>>& mat,vector<vector<bool>>& vis,int x,int y,int &r,int &c){
    if(x==r-1 and y==c-1 and mat[r-1][c-1]==1){
        vis[x][y]=true;
        return true;
    }
    if(issafe(mat,vis,x,y,r,c)){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int nx=x+xm[i];
            int ny=y+ym[i];
            if(ratinamaze(mat,vis,nx,ny,r,c))
            return true;
        }
        vis[x][y]=false;
    }
    return false;
}