// Problem link - https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &a)
{
    vector<int> ans;
    int i = 0;
    int n = a.size();
    while (i < n)
    {
        if (a[i] != a[a[i] - 1])
        {
            swap(a[i], a[a[i] - 1]);
        }
        else
        {
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] != j + 1)
        {
            ans.push_back(a[j]);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = findDuplicates(nums);
    for (auto i : ans)
    {
        cout << i << '\n';
    }
    return 0;
}