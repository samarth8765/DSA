#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> nums, int k)
{
    int n = nums.size();
    int max_ = INT_MIN;
    int sum = 0;
    int start = 0;
    int end = k - 1;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    while (end != n - 1)
    {
        max_ = max(max_, sum);
        end += 1;
        sum = sum - nums[start] + nums[end];
        start += 1;
    }
    return max_;
}

int main()
{
    vector<int> nums = {2, 4, 69, 35, 234, 123, 45, 5, 67, 1, 34};
    int subarraySize = 3;
    int ans = maxSum(nums, subarraySize);
    cout << ans << '\n';
    return 0;
}