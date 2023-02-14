// Problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &prices)
{
    int n = prices.size();
    int profit = 0;
    int totalProfit = 0;
    int curr = INT_MAX;

    for(int i=0; i < n; i++){
        if(curr > prices[i]){
            curr = prices[i];
        }

        if(prices[i] - prices[i-1] > 0){
            profit = max(profit, prices[i] - curr);
        }
        else{
            totalProfit += profit;
            profit = 0;
            curr = prices[i];
        }
    }
    return totalProfit + profit;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int ans = solve(nums);
    cout << ans << '\n';
    return 0;
}