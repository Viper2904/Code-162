class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==0)
        {
            return {};
        }
        if(n==1)
        {
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int> t=intervals[0];
        for(int i=1;i<n;i++)
        {
            auto g=intervals[i];
            if(g[0]<=t[1])
            {
                t[1]=max(g[1],t[1]);
            }
            else
            {
                ans.push_back(t);
                t=g;
            }
        }
        ans.push_back(t);
        return ans;
    }
};