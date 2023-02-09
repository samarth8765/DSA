#include<bits/stdc++.h>
using namespace std;

void solve(int col, vector<string>& board, vector<int> ud,vector<int>ld, vector<int>lc, vector<vector<string>>& ans, int n){
    if(col == n){
        ans.push_back(board);
    }

    for(int row=0; row < n; row++){
        if(lc[row] == 0 && ud[n-1+col-row] == 0 && ld[row+col] == 0){
            board[row][col] = 'Q';
            ud[n-1+col-row] = 1;
            ld[row+col] = 1;
            lc[row] = 1;
            solve(col+1, board, ud, ld ,lc, ans, n);
            board[row][col] = '.';
            ud[n-1+col-row] = 0;
            ld[row+col] = 0;
            lc[row] = 0;
        }
    }
}


int main()
{   
    int n = 4;
    vector<vector<string>> ans;
    string s(n, '.');
    vector<string> board(n,s);
    vector<int>upperDiagonal(2*n-1, 0);
    vector<int>lowerDiagonal(2*n-1,0);
    vector<int>leftCol(n,0);
    solve(0, board, upperDiagonal, lowerDiagonal, leftCol, ans, n);

    for(auto i : ans){
        for(auto j : i){
            cout << j << "\n";
        }
        cout<<"\n--------------\n";
    }
    return 0;
}