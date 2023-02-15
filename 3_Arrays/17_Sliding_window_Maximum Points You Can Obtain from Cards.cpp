// Problem link -> https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

#include <bits/stdc++.h>
using namespace std;

int maxValue(vector<int> &nums, int k)
{
    int n = nums.size();
    int sum = 0;
    for(int i=0; i < k; i++){
        sum += nums[i];
    }

    int temp = sum;
    for(int i=0; i < k; i++){
        temp = temp - nums[k-i-1] + nums[n-i-1];
        sum = max(sum, temp);
    }
    return sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    int ans = maxValue(nums, k);
    cout<<ans<<"\n";
    return 0;
}