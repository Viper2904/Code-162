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
| [0151-reverse-words-in-a-string](https://github.com/Viper2904/Code-162/tree/master/0151-reverse-words-in-a-string) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
| [0412-fizz-buzz](https://github.com/Viper2904/Code-162/tree/master/0412-fizz-buzz) |
| [0520-detect-capital](https://github.com/Viper2904/Code-162/tree/master/0520-detect-capital) |
| [0551-student-attendance-record-i](https://github.com/Viper2904/Code-162/tree/master/0551-student-attendance-record-i) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0020-valid-parentheses) |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
## Array
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0745-find-smallest-letter-greater-than-target](https://github.com/Viper2904/Code-162/tree/master/0745-find-smallest-letter-greater-than-target) |
| [0792-binary-search](https://github.com/Viper2904/Code-162/tree/master/0792-binary-search) |
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
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
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
| [0412-fizz-buzz](https://github.com/Viper2904/Code-162/tree/master/0412-fizz-buzz) |
| [0504-base-7](https://github.com/Viper2904/Code-162/tree/master/0504-base-7) |
| [0507-perfect-number](https://github.com/Viper2904/Code-162/tree/master/0507-perfect-number) |
## Bit Manipulation
|  |
| ------- |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
## Recursion
|  |
| ------- |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
## Simulation
|  |
| ------- |
| [0412-fizz-buzz](https://github.com/Viper2904/Code-162/tree/master/0412-fizz-buzz) |
## Binary Search
|  |
| ------- |
| [0745-find-smallest-letter-greater-than-target](https://github.com/Viper2904/Code-162/tree/master/0745-find-smallest-letter-greater-than-target) |
| [0792-binary-search](https://github.com/Viper2904/Code-162/tree/master/0792-binary-search) |
## Hash Table
|  |
| ------- |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
## Greedy
|  |
| ------- |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
## Two Pointers
|  |
| ------- |
| [0151-reverse-words-in-a-string](https://github.com/Viper2904/Code-162/tree/master/0151-reverse-words-in-a-string) |
## Sorting
|  |
| ------- |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
## Prefix Sum
|  |
| ------- |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
<!---LeetCode Topics End-->