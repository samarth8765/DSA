// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

#include<bits/stdc++.h>
using namespace std;

# define ll long long

ll findDiff(vector<ll>&a, ll n, ll m){
    ll diff = INT_MAX;
    sort(a.begin(), a.end());
    for(ll i=0; i <= n-m; i++){
        diff = min(diff, a[m+i-1] - a[i]);
    }
    return diff;
}

int main()
{
    vector<ll> a = {3, 4, 1, 9, 56, 7, 9, 12};
    ll n = 8;
    ll m = 5;
    ll ans = findDiff(a, n, m);
    cout << ans << '\n';
    return 0;
}