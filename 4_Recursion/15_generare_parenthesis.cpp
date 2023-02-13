#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans, string s, int open, int close, int n)
{
    if (close > open)
    {
        return;
    }
    if (s.size() == 2 * n)
    {
        ans.push_back(s);
        return;
    }

    if (open < n)
    {
        solve(ans, s + '(', open + 1, close, n);
    }

    solve(ans, s + ')', open, close + 1, n);
}

int main()
{
    int n = 3;
    string s = "(";
    int open = 1;
    int close = 0;
    vector<string> ans;
    solve(ans, s, open, close, n);
    for(auto i : ans){
        cout<< i << " ";
    }
    cout << '\n';
    return 0;
}