#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permutations(vector<int>&nums, int idx){
    if(idx == nums.size()){
        vector<vector<int>> ans;
        ans.push_back(nums);
        return ans;
    }
    vector<vector<int>> ans;
    for(int i=idx; i < nums.size(); i++){
        swap(nums[i], nums[idx]);
        vector<vector<int>> temp = permutations(nums,idx+1);
        swap(nums[i],nums[idx]);
        ans.insert(ans.end(), temp.begin(), temp.end());
    }

    return ans;

}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = permutations(nums, 0);
    for(auto i : ans){
        for(auto j : i){
            cout<< j << " ";
        }
        cout<<'\n';
    }
    return 0;
}