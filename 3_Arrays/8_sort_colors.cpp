#include<bits/stdc++.h>
using namespace std;

void sort_0_1_2(vector<int>& nums){
    int i=0;
    int j=0; 
    int k=nums.size()-1;
    int n = nums.size();

    while(k > j){
        if(nums[j] == 0){
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else if(nums[j] == 1){
            j++;
        }

        else if(nums[j] == 2){
            swap(nums[j], nums[k]);
            k--;
        }
    }
}

// 11110200221

int main()
{  
    vector<int> nums = {2,2,2,0,1,2,0,0,0,1,2,2,2,0,0,0,1,2,1,1,0,0,0,0,0};
    sort_0_1_2(nums);
    for(auto i : nums){
        cout<<i<<" "; 
    }
    cout<<'\n';
    return 0;
}       