class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int c=0;
        int n=s.length();
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    c=max(c,i-st.top());
                }
            }
        }
        return c;
    }
};