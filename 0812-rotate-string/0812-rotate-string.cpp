class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        bool ans=false;
        int m=goal.length();
        if(n!=m)
        {
            ans=false;
        }
        for(int i=0;i<n;i++)
        {
            s=s.substr(1)+s[0];
            if(s==goal)
            {
                ans=true;
            }
        }
        return ans;
    }
};