class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string t="";
        string ans="";
        int i=0;
        while(i<n){
            t = "";
            while(s[i]!= ' ' && i<n){
                t += s[i];
                i++;
            }
            while(s[i] == ' ' && i<n){
                i++;
            }
            if(!t.empty())
            {
                if(ans.empty())
                {
                    ans+=t;
                }
                else
                {
                    ans=t+' '+ans;
                }
            }
        }
        return ans;
    }
};
