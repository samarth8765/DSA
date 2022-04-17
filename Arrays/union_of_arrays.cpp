#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {2,2,2,3,33};
    vector<int> b = {4,5,5,43,32};

    set<int> s;

    for(int i = 0; i < a.size(); i++){
        s.insert(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        s.insert(b[i]);
    }
    
    cout<<s.size()<<endl;



return 0;
}