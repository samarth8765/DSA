#include<vector>
#include<iostream>
using namespace std;

int subseq_sum_is_k(vector<int> v1, int idx, int target){
    if(idx == v1.size()){
        if(target == 0){
            return 1;
        }
        return 0;
    }
    
    int num = v1[idx];
    int left = subseq_sum_is_k(v1, idx+1, target-num);
    int right = subseq_sum_is_k(v1, idx+1, target);

    return left+right;

}


int main()
{
    vector<int> v1 =  {2, 3, 5, 6, 8, 10};
    vector<int> v2;
    int target = 10;
    int ans = subseq_sum_is_k(v1,0,target);
    cout<<ans<<endl;
    return 0;
}