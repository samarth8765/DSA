#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (end >= start)
    {
        char c = s[start];
        if (c >= 'A' && c <= 'Z')
        {
            s[start] = s[start] + 32;
        }
        else if (!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')))
        {
            start++;
            continue;
        }
        char c1 = s[end];
        if (c1 >= 'A' && c1 <= 'Z')
        {
            s[end] = s[end] + 32;
        }
        else if (!((c1 >= 'a' && c1 <= 'z') || (c1 >= '0' && c1  <= '9')))
        {
            end--;
            continue;
        }

        if (s[start] != s[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    cout<<isPalindrome("A man, a plan, a canal: Panama")<<'\n';
    cout<<isPalindrome("race a car")<<'\n';
    cout<<isPalindrome(" ")<<'\n';
    return 0;
}