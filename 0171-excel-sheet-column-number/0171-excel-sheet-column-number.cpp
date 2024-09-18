class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int ans=(((int)(columnTitle[0]-'A'))+1);
        for(int i=1;i<n;i++)
        {
            ans=ans*26;
            ans=ans+((int)(columnTitle[i]-'A')+1);
        }
        return ans;
    }
};