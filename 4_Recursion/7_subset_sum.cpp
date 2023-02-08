#include<bits/stdc++.h>
using namespace std;

vector<int> subsetSum(vector<int> &v1, int sum , int idx){
    if(idx == v1.size()){
        vector<int> temp;
        temp.push_back(sum);
        return temp;
    }

    vector<int> left = subsetSum(v1, sum+v1[idx], idx+1);
    vector<int> right = subsetSum(v1, sum, idx+1); 

    left.insert(left.end(), right.begin(), right.end());

    return left;
}


int main()
{
    vector<int> a = {1,2,3};
    vector<int> ans = subsetSum(a,0,0);
    sort(ans.begin(), ans.end());
    for(auto i : ans){
        cout<< i << '\n';
    }
    return 0;
}