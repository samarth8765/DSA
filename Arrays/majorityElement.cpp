class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count = 1;
        int j = 0;
        for(int i=1; i < a.size(); i++){
            int x = a[j];
            if(x == a[i]){
                count++;
            }
            else{
                count--;
            }
            if(count < 0){
                j = i;
                count = 1;
            } 
        }
        return a[j];

    }
};