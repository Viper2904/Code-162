class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int m=queries.size();
        vector<int> pref(n);
        vector<int> ans(m);
        pref[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]^arr[i];        
        }
        for(int j=0;j<m;j++)
        {
            int l=queries[j][0];
            int r=queries[j][1];
            if(l==0)
            {
                ans[j]=pref[r];
            }
            else
            {
                ans[j]=pref[r]^pref[l-1];
            }
        }
        return ans;
    }
};