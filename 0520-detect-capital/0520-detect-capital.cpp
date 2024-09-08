class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int a=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            char ch=word[i];;
            if(isupper(ch))
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a==n || b==n || (a==1 && isupper(word[0]) && b==n-1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};