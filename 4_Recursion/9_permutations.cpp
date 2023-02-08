#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int> &nums, vector<int> &a, int idx, vector<bool> flag)
{
    if (idx == nums.size())
    {
        for(auto i : a)cout<<i<<" ";
        cout<<'\n';
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if(flag[i]){
            a.push_back(nums[i]);
            flag[i] = false;
            permutations(nums, a, idx + 1, flag);
             flag[i] = true;
            a.pop_back();
        }
    }
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<int> a;
    vector<bool> flags;
    for (int i = 0; i < nums.size(); i++)
    {
        flags.push_back(true);
    }
    permutations(nums, a, 0, flags);
}
