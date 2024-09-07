class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        string a= "Fizz";
        string b= "Buzz";
        string c= "FizzBuzz";
        for(int i=1;i<=n;i++) {
            if(i%3==0 && i%5==0) {
                ans[i-1]= c;
            }
            else if(i%3==0) {
                ans[i-1]= a;
            }
            else if(i%5==0) {
                ans[i-1]= b;
            }
            else {
                ans[i-1]= to_string(i);
            }
        }
        return ans;
    }
};
