class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                return true;
            }
            else if(nums[i]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};
