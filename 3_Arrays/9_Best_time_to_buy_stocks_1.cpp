// Problem link -> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int max_Profit = 0;
    int curr_stock = prices[0];    
    int days = prices.size();
    for(int i=1; i < days; i++){
        if(curr_stock > prices[i]){
            curr_stock = prices[i];
        }

        int profit = prices[i] - curr_stock;
        
        if(profit > max_Profit){
            max_Profit = profit;
        }

    }
    return max_Profit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int ans = maxProfit(prices);
    cout << ans << '\n';
    return 0;
}