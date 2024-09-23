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
| [0032-longest-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0032-longest-valid-parentheses) |
| [0151-reverse-words-in-a-string](https://github.com/Viper2904/Code-162/tree/master/0151-reverse-words-in-a-string) |
| [0171-excel-sheet-column-number](https://github.com/Viper2904/Code-162/tree/master/0171-excel-sheet-column-number) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
| [0412-fizz-buzz](https://github.com/Viper2904/Code-162/tree/master/0412-fizz-buzz) |
| [0520-detect-capital](https://github.com/Viper2904/Code-162/tree/master/0520-detect-capital) |
| [0551-student-attendance-record-i](https://github.com/Viper2904/Code-162/tree/master/0551-student-attendance-record-i) |
| [0812-rotate-string](https://github.com/Viper2904/Code-162/tree/master/0812-rotate-string) |
| [1473-find-the-longest-substring-containing-vowels-in-even-counts](https://github.com/Viper2904/Code-162/tree/master/1473-find-the-longest-substring-containing-vowels-in-even-counts) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0020-valid-parentheses) |
| [0032-longest-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0032-longest-valid-parentheses) |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
## Array
|  |
| ------- |
| [0041-first-missing-positive](https://github.com/Viper2904/Code-162/tree/master/0041-first-missing-positive) |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0137-single-number-ii](https://github.com/Viper2904/Code-162/tree/master/0137-single-number-ii) |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
| [0455-assign-cookies](https://github.com/Viper2904/Code-162/tree/master/0455-assign-cookies) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
| [0745-find-smallest-letter-greater-than-target](https://github.com/Viper2904/Code-162/tree/master/0745-find-smallest-letter-greater-than-target) |
| [0792-binary-search](https://github.com/Viper2904/Code-162/tree/master/0792-binary-search) |
| [0860-design-circular-queue](https://github.com/Viper2904/Code-162/tree/master/0860-design-circular-queue) |
| [0890-lemonade-change](https://github.com/Viper2904/Code-162/tree/master/0890-lemonade-change) |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
## Monotonic Stack
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
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
| [0171-excel-sheet-column-number](https://github.com/Viper2904/Code-162/tree/master/0171-excel-sheet-column-number) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0233-number-of-digit-one](https://github.com/Viper2904/Code-162/tree/master/0233-number-of-digit-one) |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
| [0412-fizz-buzz](https://github.com/Viper2904/Code-162/tree/master/0412-fizz-buzz) |
| [0504-base-7](https://github.com/Viper2904/Code-162/tree/master/0504-base-7) |
| [0507-perfect-number](https://github.com/Viper2904/Code-162/tree/master/0507-perfect-number) |
## Bit Manipulation
|  |
| ------- |
| [0137-single-number-ii](https://github.com/Viper2904/Code-162/tree/master/0137-single-number-ii) |
| [0342-power-of-four](https://github.com/Viper2904/Code-162/tree/master/0342-power-of-four) |
| [0405-convert-a-number-to-hexadecimal](https://github.com/Viper2904/Code-162/tree/master/0405-convert-a-number-to-hexadecimal) |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
| [1473-find-the-longest-substring-containing-vowels-in-even-counts](https://github.com/Viper2904/Code-162/tree/master/1473-find-the-longest-substring-containing-vowels-in-even-counts) |
## Recursion
|  |
| ------- |
| [0233-number-of-digit-one](https://github.com/Viper2904/Code-162/tree/master/0233-number-of-digit-one) |
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
| [0041-first-missing-positive](https://github.com/Viper2904/Code-162/tree/master/0041-first-missing-positive) |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
| [1473-find-the-longest-substring-containing-vowels-in-even-counts](https://github.com/Viper2904/Code-162/tree/master/1473-find-the-longest-substring-containing-vowels-in-even-counts) |
## Greedy
|  |
| ------- |
| [0409-longest-palindrome](https://github.com/Viper2904/Code-162/tree/master/0409-longest-palindrome) |
| [0455-assign-cookies](https://github.com/Viper2904/Code-162/tree/master/0455-assign-cookies) |
| [0890-lemonade-change](https://github.com/Viper2904/Code-162/tree/master/0890-lemonade-change) |
## Two Pointers
|  |
| ------- |
| [0151-reverse-words-in-a-string](https://github.com/Viper2904/Code-162/tree/master/0151-reverse-words-in-a-string) |
| [0455-assign-cookies](https://github.com/Viper2904/Code-162/tree/master/0455-assign-cookies) |
## Sorting
|  |
| ------- |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
| [0242-valid-anagram](https://github.com/Viper2904/Code-162/tree/master/0242-valid-anagram) |
| [0455-assign-cookies](https://github.com/Viper2904/Code-162/tree/master/0455-assign-cookies) |
## Prefix Sum
|  |
| ------- |
| [1435-xor-queries-of-a-subarray](https://github.com/Viper2904/Code-162/tree/master/1435-xor-queries-of-a-subarray) |
| [1473-find-the-longest-substring-containing-vowels-in-even-counts](https://github.com/Viper2904/Code-162/tree/master/1473-find-the-longest-substring-containing-vowels-in-even-counts) |
## String Matching
|  |
| ------- |
| [0812-rotate-string](https://github.com/Viper2904/Code-162/tree/master/0812-rotate-string) |
## Divide and Conquer
|  |
| ------- |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
## Counting
|  |
| ------- |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
## Dynamic Programming
|  |
| ------- |
| [0032-longest-valid-parentheses](https://github.com/Viper2904/Code-162/tree/master/0032-longest-valid-parentheses) |
| [0233-number-of-digit-one](https://github.com/Viper2904/Code-162/tree/master/0233-number-of-digit-one) |
<!---LeetCode Topics End-->