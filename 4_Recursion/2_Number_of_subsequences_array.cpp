#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> subseq(vector<int>&v1, vector<int> v2,int idx){
    if(idx == v1.size()){
        vector<vector<int>> temp;
        temp.push_back(v2);
        return temp;
    }

    int num = v1[idx];
    v2.push_back(num);
    vector<vector<int>> left = subseq(v1,v2,idx+1);
    v2.pop_back();
    vector<vector<int>> right = subseq(v1,v2,idx+1);

    left.insert(left.end(), right.begin(), right.end());
    return left;
}


int main()
{
    vector<int> v1 =  {1,2,3};
    vector<int> v2;
    vector<vector<int>> ans = subseq(v1,v2,0);
    cout<<'[';
    for(auto i : ans){
        cout<<'[';
        for(auto j : i){
            cout<< j << ",";
        }
        cout<<"],";
    }
    cout<<']';
    cout<<'\n';

    return 0;
}