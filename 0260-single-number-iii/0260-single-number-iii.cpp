class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int a=-1;
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
        if(i==0 && nums[i]!=nums[i+1]){
            a=nums[i];
        } else if(i>0 && i<n-1 && nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
            if(a==-1){
                a=nums[i];
            } else{
                return {a,nums[i]};
            }
        } else if(i==n-1) {
            return {a,nums[i]};
        }
    }
    return {};   
    }
};