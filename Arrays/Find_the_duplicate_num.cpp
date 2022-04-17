#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long
 
int main(){
    vector<int> a = {1,3,4,2,2};
    int i = 0;
    while(i < a.size()){
        if(a[a[i] - 1] != a[i]){
            swap(a[a[i]-1], a[i]);
        }else{
            i++;
        }
    }

    for(int j = 0; j < a.size(); j++){
        if(a[j] != j + 1){
            cout<<a[j]<<endl;
            break;
        }
    }
return 0;
}