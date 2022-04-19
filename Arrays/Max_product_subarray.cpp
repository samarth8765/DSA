#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<int> a ={2,3,-2,4};

    int ans = INT_MIN;
    int curr = 1;

    for(int i = 0; i < a.size(); i++){
        curr *= a[i];
        ans = max(curr, ans);
        if(curr == 0){
            curr = 1;
        }
    }
    curr = 1;

       for(int i = a.size()-1; i >= 0; i--){
        curr *= a[i];
        ans = max(curr, ans);
        if(curr == 0){
            curr = 1;
        }
    }
    cout<<ans<<endl;
   
return 0;
}


// 9 0 8 -1 -2 -2 6