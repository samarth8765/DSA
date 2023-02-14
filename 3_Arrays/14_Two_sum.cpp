//Problem-link ->https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> ans;
    int n = nums.size();
    unordered_map<int, int> mp;
    for(int i=0; i < n; i++){
        if(mp.find(target-nums[i]) == mp.end()){
            mp[nums[i]] = target - nums[i];
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(target-nums[i]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9; 
    vector<int> ans = twoSum(nums, target);
    for(auto i : ans){
        cout<< i << " ";
    }
    cout << '\n';
    return 0;
}
