// Problem link - https://leetcode.com/problems/jump-game/description/

#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int reachable = 0;
    int n = nums.size();
    for(int i=0; i < n; i++){
        if(i > reachable){
            return false;
        }
        reachable = max(reachable, nums[i] + i);
    }
    return true;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    bool ans = canJump(nums);
    cout << ans << '\n';
    return 0;
}