#include <bits/stdc++.h>
using namespace std;


bool isSafe(vector<vector<char>>& vec, int row, int col) {
    // cannot place on blocked cell
    if (vec[row][col] == '*') return false;

    // 1) check same row on the LEFT
    for (int j = 0; j < col; j++) {
        if (vec[row][j] == 'Q') return false;
    }

    // 2) check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (vec[i][j] == 'Q') return false;
    }

    // 3) check lower-left diagonal
    for (int i = row + 1, j = col - 1; i < 8 && j >= 0; i++, j--) {
        if (vec[i][j] == 'Q') return false;
    }

    return true;
}

void solve(vector<vector<char>>& vec,int col,int& ans){
    if(col==8){
        ans++;
        return ;
    }
    
    for(int i=0;i<8;i++){
        if(!isSafe(vec,i,col)){
            continue;
        }
        
        vec[i][col]='Q';
        solve(vec,col+1,ans);
        vec[i][col]='.';
    }
}

int main(){
    vector<vector<char>> vec(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>vec[i][j];
        }
    }
    int col=0;
    int ans=0;
    
    solve(vec,col,ans);
    cout<<ans<<endl;
    
    return 0;
}