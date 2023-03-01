#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Move 1 " << a << " to " << c << '\n';
        return;
    }
    TOH(n - 1, a, c, b);
    cout << "Move " << n << " from " << a << " to " << c << '\n';
    TOH(n - 1, b, a, c);
    
}

int main()
{
    int n = 4;
    char a = 'A';
    char b = 'B';
    char c = 'C';

    TOH(n, a, b, c);
    return 0;
}