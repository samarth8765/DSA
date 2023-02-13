#include <bits/stdc++.h>
using namespace std;

int solve(string s, int open, int close, int n)
{
    if (close > open)
    {
        return 0 ;
    }
    if (s.size() == 2 * n)
    {
        return 1;
    }

    int ans = 0;
    if (open < n)
    {
        ans += solve(s + '(', open + 1, close, n);
    }

    ans += solve(s + ')', open, close + 1, n);
    return ans;
}

int main()
{
    int n = 8;
    string s = "(";
    int open = 1;
    int close = 0;
    int ans = solve(s, open, close, n);
    
    cout<<ans<<'\n';
    return 0;
}