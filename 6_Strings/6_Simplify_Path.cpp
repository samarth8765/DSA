// Problem link -> https://leetcode.com/problems/simplify-path/description/

#include <bits/stdc++.h>
using namespace std;

string simplyPath(string path)
{
    path += '/';
    int n = path.size();

    stack<string> st;
    string s;

    for (int i = 0; i < n; i++)
    {
        if (path[i] != '/')
        {
            s += path[i];
        }
        if (path[i] == '/')
        {
            if (!st.empty() && s == "..")
                st.pop();
            else if (s != "" && s != "." && s != "..")
                st.push(s);
            s = "";
        }
    }

    s = "";
    if(st.empty()) return "/";
    while (!st.empty())
    {
        s = '/' + st.top() + s;
        st.pop();
    }
    return s;
}

int main()
{
    string path = "/a//b////c/d//././/..";
    string ans = simplyPath(path);
    cout << ans << '\n';
    return 0;
}

        