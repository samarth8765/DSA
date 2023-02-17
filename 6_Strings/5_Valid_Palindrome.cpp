// Problem link -> https://leetcode.com/problems/valid-palindrome-ii/description/

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return checkPalindrome(s, i, j - 1) || checkPalindrome(s, i + 1, j);
        }
        i++;
        j--;
    }
    return true;
}


int main()
{
    string s = "abcdedcbaf";
    cout<<validPalindrome(s);
    return 0;
}