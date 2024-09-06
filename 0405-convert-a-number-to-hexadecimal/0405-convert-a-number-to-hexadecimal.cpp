class Solution {
public:
    string gg(unsigned int num,string ans){
        char arr[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        if(num/16==0) 
        return arr[num%16] +ans;
        return arr[num%16]+gg(num/16,ans);
    }
    string toHex(int num) {
        unsigned int n= num;
        string ans = gg(n,"");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};