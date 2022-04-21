#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans;

    int top = 0;
    int down = a.size() - 1;
    int left = 0;
    int right = a[0].size() - 1;
    int dir = 0;

    while(top <= down && left <= right){
        if(dir == 0){
            for(int i = left;i <= right ; i++){
                ans.push_back(a[top][i]);
            }
            top += 1;
        }
        if(dir == 1){
            for(int i = top;i <= down ; i++){
                ans.push_back(a[i][right]);
            }
            right -= 1;
        }
        if(dir == 2){
            for(int i = right ;i >= left ; i--){
                ans.push_back(a[down][i]);
            }
            down -= 1;
        }
        if(dir == 3){
            for(int i = down;i >= top; i--){
                ans.push_back(a[i][left]);
            }
            left += 1;
        }

        dir = (dir + 1) % 4;
    }

    for(auto i : ans) cout<<i<<" ";

return 0;
}