// problem link -> https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

//Method-1

int findDuplicates(vector<int>& nums){
    int i=0;
    int n = nums.size();
    while(i < n){
        if(nums[i] != nums[nums[i] - 1]){
            swap(nums[i], nums[nums[i] - 1]);
        }
        else{
            i++;
        }
    }
    for(int j=0; j < n; j++){
        if(nums[j] != j+1){
            return nums[j];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2,3,4,2,2};
    int ans = findDuplicates(nums);
    cout<<ans<<'\n';
    return 0;
}