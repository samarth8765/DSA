// Problem link -> https://leetcode.com/problems/reverse-words-in-a-string/

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    s += " ";
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else if (s[i] != ' ')
        {
            string temp;
            while (s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            reverse(temp.begin(), temp.end());
            ans += temp + " ";
        }
    }
    reverse(ans.begin(), ans.end());
    return ans.substr(1);
}

int main()
{
    string ans =reverseWords("the sky is blue");
    cout<<ans;
}