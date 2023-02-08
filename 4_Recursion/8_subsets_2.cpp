#include<bits/stdc++.h>
using namespace std;


//link to the problem https://leetcode.com/problems/subsets-ii/

void subset2(vector<int> &v1, vector<int> v2, int idx){
    if(idx == v1.size()){
        for(auto i : v2) cout<< i << " ";
        cout<<'\n';
        return;
    }

    int num = v1[idx];
    v2.push_back(num);
    subset2(v1,v2, idx+1);
    v2.pop_back();
    subset2(v1,v2, idx+1);

}


int main()
{
    vector<int> v1 = {1,2,2};
    vector<int> v2;
    subset2(v1, v2, 0);
    return 0;
}