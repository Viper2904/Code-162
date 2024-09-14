class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int k=0;k<5;k++)
        {
            for(int i=0;i<n;i++)
            {
                int a=nums[i];
                if(a>=1 && a<=n)
                {
                    swap(nums[a-1],nums[i]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
            {
                return i+1;
            }
        }
        return n+1;
    }
};