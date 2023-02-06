#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> subseq_sum_is_k(vector<int> v1, vector <int> v2, int idx, int target){
    if(idx == v1.size()){
        vector<vector<int>> ans;
        if(target == 0){
            ans.push_back(v2);
        }
        return ans;
    }
    
    int num = v1[idx];
    v2.push_back(num);
    vector<vector<int>> left = subseq_sum_is_k(v1, v2, idx+1, target-num);
    v2.pop_back();
    vector<vector<int>> right = subseq_sum_is_k(v1, v2, idx+1, target);

    left.insert(left.end(), right.begin(), right.end());
    return left;

}


int main()
{
    vector<int> v1 =  {2, 3, 5, 6, 8, 10};
    vector<int> v2;
    int target = 10;
    vector<vector<int>> ans = subseq_sum_is_k(v1,v2,0,target);
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