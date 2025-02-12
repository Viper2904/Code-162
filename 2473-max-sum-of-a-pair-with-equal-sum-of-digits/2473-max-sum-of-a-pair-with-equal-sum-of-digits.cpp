#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxsum = -1;
        int n=nums.size();
        for (int i=0;i<n;i++) {
            int s = digsum(nums[i]);
            if (mp.count(s)) {
                maxsum = max(maxsum, mp[s] + nums[i]);
                mp[s] = max(mp[s], nums[i]);
            } else {
                mp[s] = nums[i];
            }
        }

        return maxsum;
    }
};
