# Code-162
Peak Element code(Leetcode) using Binary Search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end-start) / 2;
            if (nums[mid]>nums[mid + 1]) {
                end=mid;
            } 
            else 
            {
                start=mid+1;
            }
        }
        return start;
    }
};

<!---LeetCode Topics Start-->
# LeetCode Topics
## String
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0020-valid-parentheses) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0020-valid-parentheses) |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
## Array
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
## Monotonic Stack
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
<!---LeetCode Topics End-->