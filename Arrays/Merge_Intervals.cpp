#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long

vector<vector<int>> merge(vector<vector<int>> &a){
    vector<vector<int>> ans;
    if(a.size() == 0){
        return a;
    }
    sort(a.begin(),a.end());

    vector<int> temp = a[0];

    for(auto it : a){
        if(it[0] <= temp[1]){
            temp[1] = max(temp[1],it[1]);
        }
        else{
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;
}
 
int main(){
    vector<vector<int>> input = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = merge(input); 

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}