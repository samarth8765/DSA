// Problem link -> https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
using namespace std;

check

int countAnagrams(string txt, string pat)
{
    int m = txt.size();
    int n = pat.size();
    int ct = 0;

    int hash[26];
    for (int i = 0; i < n; i++)
    {
        char c = pat[i]; 
        hash[c-97]++;
    }
    queue<char> q1;
    for(int i=0; i < n; i++){
        q1.push(txt[i]);
    }
    for(int i=0; i < m; i++){
            
    }

}

int main()
{
    string txt = "forxxorfxdofr";
    string pat = "for";

    int ans = countAnagrams(txt, pat);
}