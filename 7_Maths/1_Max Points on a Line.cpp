// Problem-link ==> https://leetcode.com/problems/max-points-on-a-line/description/
#include <bits/stdc++.h>
using namespace std;

int maxPoints(vector<vector<int>> &points)
{
    int res = 1;
    int n = points.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> p1 = points[i];
        unordered_map<float, int> ct;
        for (int j = i + 1; j < n; j++)
        {
            float slope;
            vector<int> p2 = points[j];
            if (p1[0] == p2[0])
            {
                slope = INT_MAX;
            }
            else
            {
                slope = (p2[1] - p1[1] + 0.0) / (p2[0] - p1[0]);
            }
            ct[slope] += 1;
            res = max(res, ct[slope] + 1);
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> points = {{0, 0}, {4, 5}, {7, 8}, {8, 9}, {5, 6}, {3, 4}, {1, 1}};
    int ans = maxPoints(points);
    cout<<ans<<'\n';
    return 0;
}