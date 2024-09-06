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
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
## Monotonic Stack
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
## Linked List
|  |
| ------- |
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
## Design
|  |
| ------- |
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
## Queue
|  |
| ------- |
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
## Math
|  |
| ------- |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
## Bit Manipulation
|  |
| ------- |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
## Recursion
|  |
| ------- |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
<!---LeetCode Topics End-->