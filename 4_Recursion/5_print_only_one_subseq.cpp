#include<vector>
#include<iostream>
using namespace std;

bool subseq_sum_is_k(vector<int> v1, vector <int> v2, int idx, int target){
    if(idx == v1.size()){
        if(target == 0){
            cout<<'[';for(auto i : v2) cout<< i << ",";cout<<']';;
            return true;
        }
        return false;
    }
    
    int num = v1[idx];
    v2.push_back(num);
    if(subseq_sum_is_k(v1, v2, idx+1, target-num)) return true;
    v2.pop_back();
    if(subseq_sum_is_k(v1, v2, idx+1, target)) return true;

    return false;

}


int main()
{
    vector<int> v1 =  {2, 3, 5, 6, 8, 10};
    vector<int> v2;
    int target = 10;
    subseq_sum_is_k(v1,v2,0,target);
    cout<<'\n';
    return 0;
}