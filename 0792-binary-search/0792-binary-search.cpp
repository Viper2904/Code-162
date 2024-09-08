class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int c=0;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                c=1;
                break;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        if(c==1)
        {
            return mid;
        }
        else
        {
            return -1;
        }
    }
};