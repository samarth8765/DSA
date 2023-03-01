// Problem link -> https://leetcode.com/problems/majority-element/description/
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int element = 0;
    int ct = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (ct == 0)
            element = nums[i];
        if (nums[i] == element)
            ct++;
        else
            ct--;
    }
    return element;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 1, 1};
    int ans = majorityElement(nums);
    cout << ans << '\n';
    return 0;
}