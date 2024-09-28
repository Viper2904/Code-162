class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int g=nums[i];
            while(g!=0)
            {
                int r=g%10;
                sum=sum+r;
                g=g/10;
            }
            ans[i]=sum;
        }
        int min=ans[0];
        for(int i=1;i<n;i++)
        {
            if(ans[i]<min)
            {
                min=ans[i];
            }
        }
        return min;
    }
};