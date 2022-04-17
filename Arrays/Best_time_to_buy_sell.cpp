#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<int> prices = {7,6,4,3,1};

    int buy = prices[0];
    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        int temp = prices[i] - buy;
        if(temp < 0){
            buy = prices[i];
        }
        if(temp > profit){
            profit = temp;
        }
    }
    cout<<profit<<endl;
return 0;
}