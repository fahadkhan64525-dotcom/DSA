class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        unordered_map<int, int> mp;

        // Build next greater mapping for nums2
        for (int num : nums2) {

            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;
                st.pop();
            }

            st.push(num);
        }

        vector<int> ans;

        // Answer queries for nums1
        for (int num : nums1) {
            if (mp.count(num))
                ans.push_back(mp[num]);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};