#include <bits/stdc++.h>
using namespace std;

int ropeCutting(int n, int a, int b, int c)
{
    if(n == 0)return 0;
    if(n < 0) return -1;

    int res = max(ropeCutting(n-a,a,b,c), max(ropeCutting(n-b,a,b,c),ropeCutting(n-c,a,b,c)));
    if(res == -1) return -1;

    return res+1;

}

int main()
{
    int n = 9;
    int a = 2;
    int b = 2;
    int c = 2;
    cout << ropeCutting(n, a, b, c) << '\n';

    return 0;
}