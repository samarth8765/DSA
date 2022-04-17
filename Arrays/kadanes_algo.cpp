#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<int> a = {-2,1,-1,4,-1,2,1,-5,4};

    int max = INT_MIN;
    int curr = 0;

    for(int i = 0; i < a.size(); i++){
        curr += a[i];
        if(curr > max){
            max = curr;
        }
        if(curr < 0){
            curr = 0;
        }
    }
    cout<<max<<endl;



return 0;
}