class Solution {
public:
    int calculate(string s) {

        stack<int> st;
        int ans = 0, curr = 0;
        char sign = '+';

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                curr = curr*10 + (s[i] - '0');
            }

            if ((!isdigit(s[i])&&s[i] != ' ') || i == s.size() - 1) {
                if (sign == '+') {
                    st.push(curr);
                } else if (sign == '-') {
                    st.push(-curr);
                } else {
                    int num;
                    if (sign == '*') {
                        num = st.top() * curr;
                    } else {
                        num = st.top() / curr;
                    }
                    st.pop();
                    st.push(num);
                }
                sign = s[i]; 
                curr = 0;  
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
