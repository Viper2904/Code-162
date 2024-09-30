class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int gg=0;
        while(i<n) {
            if(i>gg)
            {
                return false;
            }
            gg=max(i+nums[i],gg);
            if(gg>n-1)
            {
                return true;
            }
            i++;
        }
        return true;
    }
};
