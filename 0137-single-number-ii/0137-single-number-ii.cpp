class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int> gg;
        int ans;
        for(int i=0;i<n;i++)
        {
            gg[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(gg[nums[i]]==1)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};