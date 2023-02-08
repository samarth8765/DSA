#include<bits/stdc++.h>
using namespace std;

// 1 1 1   

vector<vector<int>> permII(vector<int>& nums, int idx){
    if(nums.size() == idx){
        vector<vector<int>> temp;
        temp.push_back(nums);
        return temp;
    }
    vector<vector<int>> ans;
    unordered_set<int> s;
    for(int i=idx; i<nums.size(); i++){
        if(s.find(nums[i]) != s.end())continue;
        s.insert(nums[i]);
        swap(nums[idx], nums[i]);
        vector<vector<int>> temp = permII(nums, idx+1);
        swap(nums[idx], nums[i]);
        ans.insert(ans.end(), temp.begin(), temp.end());
    }

    return ans;

}

int main()
{
    vector<int> nums = {1,1,2};
    vector<vector<int>> ans = permII(nums, 0);
    for(auto i : ans){
        for(auto j : i){
            cout<< j << " ";
        }
        cout<<'\n';
    }
    return 0;
}