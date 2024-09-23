class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int a=0,b=0;
        while(a<m && b<n)
        {
            if(g[b]<=s[a])
            {
                b++;
            }
            a++;
        }
        return b;
    }
};