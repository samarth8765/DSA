#include<bits/stdc++.h>
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    fo(i, n) cin >> a[i];

    int i = 0;
    int j = 0;
    int k = n - 1;

    while (i <= k) {
        if (a[i] == 0) {
            swap(a[i], a[j]);
            i++; j++;
        }
        else if (a[i] == 1) {
            i++;
        }
        else {
            swap(a[i], a[k]);
            k--;
        }
    }

    fo(i, n) cout << a[i] << " ";

}
