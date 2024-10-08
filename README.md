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
| [0094-binary-tree-inorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0094-binary-tree-inorder-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0145-binary-tree-postorder-traversal) |
| [0227-basic-calculator-ii](https://github.com/Viper2904/Code-162/tree/master/0227-basic-calculator-ii) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
## Array
|  |
| ------- |
| [0033-search-in-rotated-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0033-search-in-rotated-sorted-array) |
| [0041-first-missing-positive](https://github.com/Viper2904/Code-162/tree/master/0041-first-missing-positive) |
| [0055-jump-game](https://github.com/Viper2904/Code-162/tree/master/0055-jump-game) |
| [0056-merge-intervals](https://github.com/Viper2904/Code-162/tree/master/0056-merge-intervals) |
| [0057-insert-interval](https://github.com/Viper2904/Code-162/tree/master/0057-insert-interval) |
| [0081-search-in-rotated-sorted-array-ii](https://github.com/Viper2904/Code-162/tree/master/0081-search-in-rotated-sorted-array-ii) |
| [0084-largest-rectangle-in-histogram](https://github.com/Viper2904/Code-162/tree/master/0084-largest-rectangle-in-histogram) |
| [0135-candy](https://github.com/Viper2904/Code-162/tree/master/0135-candy) |
| [0137-single-number-ii](https://github.com/Viper2904/Code-162/tree/master/0137-single-number-ii) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0153-find-minimum-in-rotated-sorted-array) |
| [0169-majority-element](https://github.com/Viper2904/Code-162/tree/master/0169-majority-element) |
| [0260-single-number-iii](https://github.com/Viper2904/Code-162/tree/master/0260-single-number-iii) |
| [0455-assign-cookies](https://github.com/Viper2904/Code-162/tree/master/0455-assign-cookies) |
| [0496-next-greater-element-i](https://github.com/Viper2904/Code-162/tree/master/0496-next-greater-element-i) |
| [0540-single-element-in-a-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0540-single-element-in-a-sorted-array) |
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
| [0260-single-number-iii](https://github.com/Viper2904/Code-162/tree/master/0260-single-number-iii) |
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
| [0033-search-in-rotated-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0033-search-in-rotated-sorted-array) |
| [0081-search-in-rotated-sorted-array-ii](https://github.com/Viper2904/Code-162/tree/master/0081-search-in-rotated-sorted-array-ii) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0153-find-minimum-in-rotated-sorted-array) |
| [0540-single-element-in-a-sorted-array](https://github.com/Viper2904/Code-162/tree/master/0540-single-element-in-a-sorted-array) |
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
| [0055-jump-game](https://github.com/Viper2904/Code-162/tree/master/0055-jump-game) |
| [0135-candy](https://github.com/Viper2904/Code-162/tree/master/0135-candy) |
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
| [0056-merge-intervals](https://github.com/Viper2904/Code-162/tree/master/0056-merge-intervals) |
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
| [0055-jump-game](https://github.com/Viper2904/Code-162/tree/master/0055-jump-game) |
| [0233-number-of-digit-one](https://github.com/Viper2904/Code-162/tree/master/0233-number-of-digit-one) |
## Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0094-binary-tree-inorder-traversal) |
| [0102-binary-tree-level-order-traversal](https://github.com/Viper2904/Code-162/tree/master/0102-binary-tree-level-order-traversal) |
| [0110-balanced-binary-tree](https://github.com/Viper2904/Code-162/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0145-binary-tree-postorder-traversal) |
## Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0094-binary-tree-inorder-traversal) |
| [0110-balanced-binary-tree](https://github.com/Viper2904/Code-162/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0145-binary-tree-postorder-traversal) |
## Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0094-binary-tree-inorder-traversal) |
| [0102-binary-tree-level-order-traversal](https://github.com/Viper2904/Code-162/tree/master/0102-binary-tree-level-order-traversal) |
| [0110-balanced-binary-tree](https://github.com/Viper2904/Code-162/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/Viper2904/Code-162/tree/master/0145-binary-tree-postorder-traversal) |
## Breadth-First Search
|  |
| ------- |
| [0102-binary-tree-level-order-traversal](https://github.com/Viper2904/Code-162/tree/master/0102-binary-tree-level-order-traversal) |
<!---LeetCode Topics End-->