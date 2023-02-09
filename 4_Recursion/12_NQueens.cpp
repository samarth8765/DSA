#include<bits/stdc++.h>
using namespace std;
bool isSafeToPlaceQueen(int row, int col, vector<string> board, int n){
    int dup_row = row;
    int dup_col = col;

    while(row >= 0 && col >= 0){
        if(board[row][col] == 'Q') return false;
        row--;col--;
    }

    row = dup_row;
    col = dup_col;

    while(col >= 0){
        if(board[row][col] == 'Q')return false;
        col--;
    }

    row = dup_row;
    col = dup_col;

    while(row < n && col >= 0){
        if(board[row][col] == 'Q')return false;
        row++;
        col--;
    }

    return true;

}

void solve(int col, vector<string>& board,vector<vector<string>> &ans, int n){
    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int row=0; row < n; row++){
        if(isSafeToPlaceQueen(row, col, board, n)){
            board[row][col] = 'Q';
            solve(col+1, board, ans, n);
            board[row][col] = '.';
        }
    }
}

int main()
{   
    int n = 8;
    vector<vector<string>> ans;
    string s(n, '.');
    vector<string> board(n,s);
    solve(0, board, ans, n);
    //printing the pattern

    for(auto i : ans){
        for(auto j : i){
            cout << j << "\n";
        }
        cout<<"\n--------------\n";
    }
    return 0;
}