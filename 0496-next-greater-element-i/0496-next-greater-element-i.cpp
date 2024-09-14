class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        vector<int> gre(m,-1); 
        stack<int> st;
        for (int i = m - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (!st.empty()) {
                gre[i] = st.top();
            }
            st.push(nums2[i]);
        }
        for (int x : nums1) {
            for (int j = 0; j < m; j++) {
                if (nums2[j] == x) {
                    ans.push_back(gre[j]);
                    break;
                }
            }
        }

        return ans;
    }
};
