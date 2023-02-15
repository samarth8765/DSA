// Problem link -> https://leetcode.com/problems/spiral-matrix/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();

    int top = 0;
    int bottom = m-1;
    int right = n-1;
    int left = 0;

    int dir = 0;

    vector<int> ans;

    while (left <= right && top <= bottom)
    {
        if(dir == 0){
            for(int i=left; i <= right; i++){
                ans.push_back(mat[top][i]);
            }
            top += 1;
        }
        else if(dir == 1){
            for(int i=top; i <= bottom; i++){
                ans.push_back(mat[i][right]);
            }
            right -= 1;
        }
        else if(dir == 2){
            for(int i=right; i >= left; i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom -= 1;
        }
        else{
            for(int i=bottom; i >= top; i--){
                ans.push_back(mat[i][left]);
            }
            left += 1;
        }

        dir = (dir + 1) % 4; 
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiral(matrix);

    for(auto i : ans){
        cout<< i << " ";
    }
    cout << "\n";

    return 0;
}