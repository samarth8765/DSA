#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<int> a ={1,9,3,10,4,20,2};
    int max_ = 0;
    for(auto i : a){
        max_ = max(max_,i);
    }
    vector<int> b (max_ + 1, 0);
    for(int i = 0; i < a.size(); i++){
        b[a[i]]++;
    }

    int count = 0;
    int curr = 0;
    for(int i = 0; i < b.size() + 1; i++){
        if(b[i] > 0){
            curr++;
        }else{
            curr = 0;
        }
        count = max(curr, count);
    }
    cout<<count<<endl;

return 0;
}