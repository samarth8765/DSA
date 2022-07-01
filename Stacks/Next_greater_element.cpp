class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int>mp;
        vector<int>ans(nums1.size());
        stack<int>st;
        st.push(nums2[n - 1]);
        mp[nums2[n - 1]] = -1;

        for (int i = n - 2; i >= 0; i--) {
            int x = nums2[i];
            while (!st.empty() && x >= st.top()) {
                st.pop();
            }
            if (st.empty())mp[x] = -1;
            else mp[x] = st.top();

            st.push(x);
        }


        for (int i = 0; i < nums1.size(); i++) {
            ans[i] = mp[nums1[i]];
        }

        return ans;
    }
};