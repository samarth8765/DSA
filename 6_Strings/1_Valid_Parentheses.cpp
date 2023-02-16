// Problem link ->https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>
using namespace std;

bool valid(string s)
{
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == '(' || c == '{'|| c == '[')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '(')
            {
                st.pop();
            }
        }
        else if (c == '}')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '{')
            {
                st.pop();
            }
        }
        else if (c == ']')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '[')
            {
                st.pop();
            }
        }
    }
    cout<<st.size()<<endl;
    if(!st.empty()){
        return false;
    }
    return true;
}

int main()
{
    string s = "()";
    bool ans = valid(s);
    cout << ans << '\n';
    return 0;
}