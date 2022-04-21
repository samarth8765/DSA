#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define ll long long

int main(){
    vector<vector<int>> a = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 60;
    int i = 0;
    int j = a[0].size() - 1;

    bool flag = false;
    
    while(i < a.size() && j>=0 ){
        if(a[i][j] == target){
            cout<<true<<endl;
            flag = true;
            break;
        }

        else if(a[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    if(!flag) cout<<false<<endl;

return 0;
}