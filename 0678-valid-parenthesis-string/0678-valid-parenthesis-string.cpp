class Solution {
public:
    bool checkValidString(string s) {
        int l=0,r=0;
        int n=s.length();
        for (int i=0;i<n;i++) {
            char c=s[i];
            if(c=='(')
            {
                l+=1;
            }
            else
            {
                l-=1;
            }
            if(c==')')
            {
                r-=1;
            }
            else
            {
                r+=1;
            }
            if (r<0) {
                break;
            }
            l = max(l, 0);
        }
        return l==0;
    }
};
