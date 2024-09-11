class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        {
            return "0";
        }
        int sign=0;
        if(num<0)
        {
            sign=1;
        }
        num=abs(num);
        string str="";
        while(num>0)
        {
            str+=num%7+'0';
            num/=7;
        }
        if(sign==1)
        {
            str+='-';
        }
        reverse(str.begin(),str.end());
        return str;
    }
};