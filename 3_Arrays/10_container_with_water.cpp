// Problem link - https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int start = 0;
    int end = height.size() - 1;

    int h, area = INT_MIN, w;
    while (end > start)
    {
        h = min(height[start], height[end]);
        w = end - start;
        area = max(area, h * w);
        if (height[start] > height[end])
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return area;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int ans = maxArea(height);
    cout << ans << '\n';
    return 0;
}