# 🧩 LeetCode Solutions in C++

My personal collection of [LeetCode](https://leetcode.com/) problem solutions, auto-synced with [LeetSync](https://github.com/LeetSync/LeetSync).
Each problem lives in its own folder with the problem statement and a C++ solution.

![C++](https://img.shields.io/badge/Language-C++-blue?logo=c%2B%2B) ![Problems](https://img.shields.io/badge/Problems-128-brightgreen) ![Easy](https://img.shields.io/badge/Easy-50-brightgreen) ![Medium](https://img.shields.io/badge/Medium-60-orange) ![Hard](https://img.shields.io/badge/Hard-18-red)

## 📊 Stats

- **Total problems:** 128
- 🟢 **Easy:** 50
- 🟡 **Medium:** 60
- 🔴 **Hard:** 18
- **Language:** C++ (`.cpp`)

## 📁 Repository Structure

```
<problem-id>-<problem-slug>/
├── README.md          # Problem statement (synced from LeetCode)
├── <solution>.cpp     # C++ solution
└── Notes.md           # Personal notes (only on some problems)
```

Example:

```
100-same-tree/
├── README.md
├── Notes.md
└── same-tree.cpp
```

## 🚀 How to Use

1. Browse the table below or open any problem folder.
2. Read the problem statement in that folder's `README.md`.
3. Check the C++ solution (`.cpp` file).

Compile and run any solution locally with `g++`, e.g.:

```bash
# from the repo root
g++ -std=c++17 -O2 -o /tmp/solution 100-same-tree/same-tree.cpp
```

> Note: solutions are LeetCode `Solution` classes (no `main()`), so you may need a small driver to run them locally.

## 📝 Problems

| # | Problem | Difficulty | Solution |
|---|---------|------------|----------|
| 5 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring) | 🟡 Medium | [longest-palindromic-substring.cpp](./5-longest-palindromic-substring/longest-palindromic-substring.cpp) |
| 6 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion) | 🟡 Medium | [zigzag-conversion.cpp](./6-zigzag-conversion/zigzag-conversion.cpp) |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses) | 🟢 Easy | [valid-parentheses.cpp](./20-valid-parentheses/valid-parentheses.cpp) |
| 28 | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string) | 🟢 Easy | [find-the-index-of-the-first-occurrence-in-a-string.cpp](./28-find-the-index-of-the-first-occurrence-in-a-string/find-the-index-of-the-first-occurrence-in-a-string.cpp) |
| 31 | [Next Permutation](https://leetcode.com/problems/next-permutation) | 🟡 Medium | [next-permutation.cpp](./31-next-permutation/next-permutation.cpp) |
| 41 | [First Missing Positive](https://leetcode.com/problems/first-missing-positive) | 🔴 Hard | [first-missing-positive.cpp](./41-first-missing-positive/first-missing-positive.cpp) |
| 59 | [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii) | 🟡 Medium | [spiral-matrix-ii.cpp](./59-spiral-matrix-ii/spiral-matrix-ii.cpp) |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths) | 🟡 Medium | [unique-paths.cpp](./62-unique-paths/unique-paths.cpp) |
| 66 | [Plus One](https://leetcode.com/problems/plus-one) | 🟢 Easy | [plus-one.cpp](./66-plus-one/plus-one.cpp) |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs) | 🟢 Easy | [climbing-stairs.cpp](./70-climbing-stairs/climbing-stairs.cpp) |
| 71 | [Simplify Path](https://leetcode.com/problems/simplify-path) | 🟡 Medium | [simplify-path.cpp](./71-simplify-path/simplify-path.cpp) |
| 73 | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes) | 🟡 Medium | [set-matrix-zeroes.cpp](./73-set-matrix-zeroes/set-matrix-zeroes.cpp) |
| 75 | [Sort Colors](https://leetcode.com/problems/sort-colors) | 🟡 Medium | [sort-colors.cpp](./75-sort-colors/sort-colors.cpp) |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring) | 🔴 Hard | [minimum-window-substring.cpp](./76-minimum-window-substring/minimum-window-substring.cpp) |
| 80 | [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii) | 🟡 Medium | [remove-duplicates-from-sorted-array-ii.cpp](./80-remove-duplicates-from-sorted-array-ii/remove-duplicates-from-sorted-array-ii.cpp) |
| 84 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram) | 🔴 Hard | [largest-rectangle-in-histogram.cpp](./84-largest-rectangle-in-histogram/largest-rectangle-in-histogram.cpp) |
| 85 | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle) | 🔴 Hard | [maximal-rectangle.cpp](./85-maximal-rectangle/maximal-rectangle.cpp) |
| 93 | [Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses) | 🟡 Medium | [restore-ip-addresses.cpp](./93-restore-ip-addresses/restore-ip-addresses.cpp) |
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal) | 🟢 Easy | [binary-tree-inorder-traversal.cpp](./94-binary-tree-inorder-traversal/binary-tree-inorder-traversal.cpp) |
| 100 | [Same Tree](https://leetcode.com/problems/same-tree) | 🟢 Easy | [same-tree.cpp](./100-same-tree/same-tree.cpp) |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree) | 🟢 Easy | [symmetric-tree.cpp](./101-symmetric-tree/symmetric-tree.cpp) |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal) | 🟡 Medium | [binary-tree-level-order-traversal.cpp](./102-binary-tree-level-order-traversal/binary-tree-level-order-traversal.cpp) |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree) | 🟢 Easy | [maximum-depth-of-binary-tree.cpp](./104-maximum-depth-of-binary-tree/maximum-depth-of-binary-tree.cpp) |
| 105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal) | 🟡 Medium | [construct-binary-tree-from-preorder-and-inorder-traversal.cpp](./105-construct-binary-tree-from-preorder-and-inorder-traversal/construct-binary-tree-from-preorder-and-inorder-traversal.cpp) |
| 106 | [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal) | 🟡 Medium | [construct-binary-tree-from-inorder-and-postorder-traversal.cpp](./106-construct-binary-tree-from-inorder-and-postorder-traversal/construct-binary-tree-from-inorder-and-postorder-traversal.cpp) |
| 110 | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree) | 🟢 Easy | — |
| 114 | [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list) | 🟡 Medium | [flatten-binary-tree-to-linked-list.cpp](./114-flatten-binary-tree-to-linked-list/flatten-binary-tree-to-linked-list.cpp) |
| 115 | [Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences) | 🔴 Hard | [distinct-subsequences.cpp](./115-distinct-subsequences/distinct-subsequences.cpp) |
| 119 | [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii) | 🟢 Easy | — |
| 120 | [Triangle](https://leetcode.com/problems/triangle) | 🟡 Medium | [triangle.cpp](./120-triangle/triangle.cpp) |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome) | 🟢 Easy | [valid-palindrome.cpp](./125-valid-palindrome/valid-palindrome.cpp) |
| 136 | [Single Number](https://leetcode.com/problems/single-number) | 🟢 Easy | [single-number.cpp](./136-single-number/single-number.cpp) |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer) | 🟡 Medium | [copy-list-with-random-pointer.cpp](./138-copy-list-with-random-pointer/copy-list-with-random-pointer.cpp) |
| 145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal) | 🟢 Easy | [binary-tree-postorder-traversal.cpp](./145-binary-tree-postorder-traversal/binary-tree-postorder-traversal.cpp) |
| 199 | [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view) | 🟡 Medium | [binary-tree-right-side-view.cpp](./199-binary-tree-right-side-view/binary-tree-right-side-view.cpp) |
| 257 | [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths) | 🟢 Easy | [binary-tree-paths.cpp](./257-binary-tree-paths/binary-tree-paths.cpp) |
| 278 | [First Bad Version](https://leetcode.com/problems/first-bad-version) | 🟢 Easy | [first-bad-version.cpp](./278-first-bad-version/first-bad-version.cpp) |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes) | 🟢 Easy | [move-zeroes.cpp](./283-move-zeroes/move-zeroes.cpp) |
| 344 | [Reverse String](https://leetcode.com/problems/reverse-string) | 🟢 Easy | [reverse-string.cpp](./344-reverse-string/reverse-string.cpp) |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i) | 🟢 Easy | [next-greater-element-i.cpp](./496-next-greater-element-i/next-greater-element-i.cpp) |
| 503 | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii) | 🟡 Medium | [next-greater-element-ii.cpp](./503-next-greater-element-ii/next-greater-element-ii.cpp) |
| 543 | [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree) | 🟢 Easy | [diameter-of-binary-tree.cpp](./543-diameter-of-binary-tree/diameter-of-binary-tree.cpp) |
| 556 | [Next Greater Element III](https://leetcode.com/problems/next-greater-element-iii) | 🟡 Medium | [next-greater-element-iii.cpp](./556-next-greater-element-iii/next-greater-element-iii.cpp) |
| 567 | [Permutation in String](https://leetcode.com/problems/permutation-in-string) | 🟡 Medium | [permutation-in-string.cpp](./567-permutation-in-string/permutation-in-string.cpp) |
| 572 | [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree) | 🟢 Easy | — |
| 628 | [Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers) | 🟢 Easy | [maximum-product-of-three-numbers.cpp](./628-maximum-product-of-three-numbers/maximum-product-of-three-numbers.cpp) |
| 662 | [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree) | 🟡 Medium | [maximum-width-of-binary-tree.cpp](./662-maximum-width-of-binary-tree/maximum-width-of-binary-tree.cpp) |
| 678 | [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string) | 🟡 Medium | [valid-parenthesis-string.cpp](./678-valid-parenthesis-string/valid-parenthesis-string.cpp) |
| 692 | [Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words) | 🟡 Medium | [top-k-frequent-words.cpp](./692-top-k-frequent-words/top-k-frequent-words.cpp) |
| 712 | [Minimum ASCII Delete Sum for Two Strings](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings) | 🟡 Medium | [minimum-ascii-delete-sum-for-two-strings.cpp](./712-minimum-ascii-delete-sum-for-two-strings/minimum-ascii-delete-sum-for-two-strings.cpp) |
| 864 | [Image Overlap](https://leetcode.com/problems/image-overlap) | 🟡 Medium | [image-overlap.cpp](./864-image-overlap/image-overlap.cpp) |
| 866 | [Rectangle Overlap](https://leetcode.com/problems/rectangle-overlap) | 🟢 Easy | [rectangle-overlap.cpp](./866-rectangle-overlap/rectangle-overlap.cpp) |
| 870 | [Magic Squares In Grid](https://leetcode.com/problems/magic-squares-in-grid) | 🟡 Medium | [magic-squares-in-grid.cpp](./870-magic-squares-in-grid/magic-squares-in-grid.cpp) |
| 874 | [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare) | 🟢 Easy | [backspace-string-compare.cpp](./874-backspace-string-compare/backspace-string-compare.cpp) |
| 957 | [Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid) | 🟡 Medium | [minimum-add-to-make-parentheses-valid.cpp](./957-minimum-add-to-make-parentheses-valid/minimum-add-to-make-parentheses-valid.cpp) |
| 958 | [Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii) | 🟢 Easy | [sort-array-by-parity-ii.cpp](./958-sort-array-by-parity-ii/sort-array-by-parity-ii.cpp) |
| 977 | [Distinct Subsequences II](https://leetcode.com/problems/distinct-subsequences-ii) | 🔴 Hard | [distinct-subsequences-ii.cpp](./977-distinct-subsequences-ii/distinct-subsequences-ii.cpp) |
| 981 | [Delete Columns to Make Sorted](https://leetcode.com/problems/delete-columns-to-make-sorted) | 🟢 Easy | [delete-columns-to-make-sorted.cpp](./981-delete-columns-to-make-sorted/delete-columns-to-make-sorted.cpp) |
| 1001 | [N-Repeated Element in Size 2N Array](https://leetcode.com/problems/n-repeated-element-in-size-2n-array) | 🟢 Easy | [n-repeated-element-in-size-2n-array.cpp](./1001-n-repeated-element-in-size-2n-array/n-repeated-element-in-size-2n-array.cpp) |
| 1029 | [Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree) | 🔴 Hard | [vertical-order-traversal-of-a-binary-tree.cpp](./1029-vertical-order-traversal-of-a-binary-tree/vertical-order-traversal-of-a-binary-tree.cpp) |
| 1116 | [Maximum Level Sum of a Binary Tree](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree) | 🟡 Medium | [maximum-level-sum-of-a-binary-tree.cpp](./1116-maximum-level-sum-of-a-binary-tree/maximum-level-sum-of-a-binary-tree.cpp) |
| 1159 | [Smallest Subsequence of Distinct Characters](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters) | 🟡 Medium | [smallest-subsequence-of-distinct-characters.cpp](./1159-smallest-subsequence-of-distinct-characters/smallest-subsequence-of-distinct-characters.cpp) |
| 1188 | [Brace Expansion II](https://leetcode.com/problems/brace-expansion-ii) | 🔴 Hard | [brace-expansion-ii.cpp](./1188-brace-expansion-ii/brace-expansion-ii.cpp) |
| 1222 | [Remove Covered Intervals](https://leetcode.com/problems/remove-covered-intervals) | 🟡 Medium | [remove-covered-intervals.cpp](./1222-remove-covered-intervals/remove-covered-intervals.cpp) |
| 1256 | [Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array) | 🟢 Easy | [rank-transform-of-an-array.cpp](./1256-rank-transform-of-an-array/rank-transform-of-an-array.cpp) |
| 1284 | [Four Divisors](https://leetcode.com/problems/four-divisors) | 🟡 Medium | [four-divisors.cpp](./1284-four-divisors/four-divisors.cpp) |
| 1297 | [Maximum Number of Balloons](https://leetcode.com/problems/maximum-number-of-balloons) | 🟢 Easy | [maximum-number-of-balloons.cpp](./1297-maximum-number-of-balloons/maximum-number-of-balloons.cpp) |
| 1298 | [Reverse Substrings Between Each Pair of Parentheses](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses) | 🟡 Medium | [reverse-substrings-between-each-pair-of-parentheses.cpp](./1298-reverse-substrings-between-each-pair-of-parentheses/reverse-substrings-between-each-pair-of-parentheses.cpp) |
| 1355 | [Minimum Deletions to Make Array Beautiful](https://leetcode.com/problems/minimum-deletions-to-make-array-beautiful) | 🟡 Medium | [minimum-deletions-to-make-array-beautiful.cpp](./1355-minimum-deletions-to-make-array-beautiful/minimum-deletions-to-make-array-beautiful.cpp) |
| 1386 | [Shift 2D Grid](https://leetcode.com/problems/shift-2d-grid) | 🟢 Easy | [shift-2d-grid.cpp](./1386-shift-2d-grid/shift-2d-grid.cpp) |
| 1446 | [Angle Between Hands of a Clock](https://leetcode.com/problems/angle-between-hands-of-a-clock) | 🟡 Medium | [angle-between-hands-of-a-clock.cpp](./1446-angle-between-hands-of-a-clock/angle-between-hands-of-a-clock.cpp) |
| 1460 | [Number of Substrings Containing All Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters) | 🟡 Medium | [number-of-substrings-containing-all-three-characters.cpp](./1460-number-of-substrings-containing-all-three-characters/number-of-substrings-containing-all-three-characters.cpp) |
| 1476 | [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix) | 🟢 Easy | [count-negative-numbers-in-a-sorted-matrix.cpp](./1476-count-negative-numbers-in-a-sorted-matrix/count-negative-numbers-in-a-sorted-matrix.cpp) |
| 1501 | [Circle and Rectangle Overlapping](https://leetcode.com/problems/circle-and-rectangle-overlapping) | 🟡 Medium | [circle-and-rectangle-overlapping.cpp](./1501-circle-and-rectangle-overlapping/circle-and-rectangle-overlapping.cpp) |
| 1573 | [Find Two Non-overlapping Sub-arrays Each With Target Sum](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum) | 🟡 Medium | [find-two-non-overlapping-sub-arrays-each-with-target-sum.cpp](./1573-find-two-non-overlapping-sub-arrays-each-with-target-sum/find-two-non-overlapping-sub-arrays-each-with-target-sum.cpp) |
| 1574 | [Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array) | 🟢 Easy | [maximum-product-of-two-elements-in-an-array.cpp](./1574-maximum-product-of-two-elements-in-an-array/maximum-product-of-two-elements-in-an-array.cpp) |
| 1644 | [Maximum Number of Non-Overlapping Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-substrings) | 🔴 Hard | [maximum-number-of-non-overlapping-substrings.cpp](./1644-maximum-number-of-non-overlapping-substrings/maximum-number-of-non-overlapping-substrings.cpp) |
| 1693 | [Sum of All Odd Length Subarrays](https://leetcode.com/problems/sum-of-all-odd-length-subarrays) | 🟢 Easy | [sum-of-all-odd-length-subarrays.cpp](./1693-sum-of-all-odd-length-subarrays/sum-of-all-odd-length-subarrays.cpp) |
| 1725 | [Number of Sets of K Non-Overlapping Line Segments](https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments) | 🟡 Medium | [number-of-sets-of-k-non-overlapping-line-segments.cpp](./1725-number-of-sets-of-k-non-overlapping-line-segments/number-of-sets-of-k-non-overlapping-line-segments.cpp) |
| 1776 | [Minimum Operations to Reduce X to Zero](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero) | 🟡 Medium | [minimum-operations-to-reduce-x-to-zero.cpp](./1776-minimum-operations-to-reduce-x-to-zero/minimum-operations-to-reduce-x-to-zero.cpp) |
| 1833 | [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude) | 🟢 Easy | [find-the-highest-altitude.cpp](./1833-find-the-highest-altitude/find-the-highest-altitude.cpp) |
| 1934 | [Evaluate the Bracket Pairs of a String](https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string) | 🟡 Medium | [evaluate-the-bracket-pairs-of-a-string.cpp](./1934-evaluate-the-bracket-pairs-of-a-string/evaluate-the-bracket-pairs-of-a-string.cpp) |
| 1956 | [Maximum Element After Decreasing and Rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging) | 🟡 Medium | [maximum-element-after-decreasing-and-rearranging.cpp](./1956-maximum-element-after-decreasing-and-rearranging/maximum-element-after-decreasing-and-rearranging.cpp) |
| 1961 | [Maximum Ice Cream Bars](https://leetcode.com/problems/maximum-ice-cream-bars) | 🟡 Medium | [maximum-ice-cream-bars.cpp](./1961-maximum-ice-cream-bars/maximum-ice-cream-bars.cpp) |
| 1968 | [Maximum Building Height](https://leetcode.com/problems/maximum-building-height) | 🔴 Hard | [maximum-building-height.cpp](./1968-maximum-building-height/maximum-building-height.cpp) |
| 2039 | [Sum Game](https://leetcode.com/problems/sum-game) | 🟡 Medium | [sum-game.cpp](./2039-sum-game/sum-game.cpp) |
| 2099 | [Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word) | 🟢 Easy | [number-of-strings-that-appear-as-substrings-in-word.cpp](./2099-number-of-strings-that-appear-as-substrings-in-word/number-of-strings-that-appear-as-substrings-in-word.cpp) |
| 2106 | [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array) | 🟢 Easy | [find-greatest-common-divisor-of-array.cpp](./2106-find-greatest-common-divisor-of-array/find-greatest-common-divisor-of-array.cpp) |
| 2216 | [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list) | 🟡 Medium | [delete-the-middle-node-of-a-linked-list.cpp](./2216-delete-the-middle-node-of-a-linked-list/delete-the-middle-node-of-a-linked-list.cpp) |
| 2233 | [Number of Smooth Descent Periods of a Stock](https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock) | 🟡 Medium | [number-of-smooth-descent-periods-of-a-stock.cpp](./2233-number-of-smooth-descent-periods-of-a-stock/number-of-smooth-descent-periods-of-a-stock.cpp) |
| 2236 | [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list) | 🟡 Medium | [maximum-twin-sum-of-a-linked-list.cpp](./2236-maximum-twin-sum-of-a-linked-list/maximum-twin-sum-of-a-linked-list.cpp) |
| 2271 | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign) | 🟡 Medium | [rearrange-array-elements-by-sign.cpp](./2271-rearrange-array-elements-by-sign/rearrange-array-elements-by-sign.cpp) |
| 2346 | [Largest 3-Same-Digit Number in String](https://leetcode.com/problems/largest-3-same-digit-number-in-string) | 🟢 Easy | [largest-3-same-digit-number-in-string.cpp](./2346-largest-3-same-digit-number-in-string/largest-3-same-digit-number-in-string.cpp) |
| 2347 | [Count Nodes Equal to Average of Subtree](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree) | 🟡 Medium | [count-nodes-equal-to-average-of-subtree.cpp](./2347-count-nodes-equal-to-average-of-subtree/count-nodes-equal-to-average-of-subtree.cpp) |
| 2559 | [Maximum Number of Non-overlapping Palindrome Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings) | 🔴 Hard | [maximum-number-of-non-overlapping-palindrome-substrings.cpp](./2559-maximum-number-of-non-overlapping-palindrome-substrings/maximum-number-of-non-overlapping-palindrome-substrings.cpp) |
| 2576 | [Minimum Penalty for a Shop](https://leetcode.com/problems/minimum-penalty-for-a-shop) | 🟡 Medium | [minimum-penalty-for-a-shop.cpp](./2576-minimum-penalty-for-a-shop/minimum-penalty-for-a-shop.cpp) |
| 3242 | [Count Elements With Maximum Frequency](https://leetcode.com/problems/count-elements-with-maximum-frequency) | 🟢 Easy | [count-elements-with-maximum-frequency.cpp](./3242-count-elements-with-maximum-frequency/count-elements-with-maximum-frequency.cpp) |
| 3299 | [Find the Maximum Number of Elements in Subset](https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset) | 🟡 Medium | [find-the-maximum-number-of-elements-in-subset.cpp](./3299-find-the-maximum-number-of-elements-in-subset/find-the-maximum-number-of-elements-in-subset.cpp) |
| 3334 | [Apple Redistribution into Boxes](https://leetcode.com/problems/apple-redistribution-into-boxes) | 🟢 Easy | [apple-redistribution-into-boxes.cpp](./3334-apple-redistribution-into-boxes/apple-redistribution-into-boxes.cpp) |
| 3351 | [Maximize Happiness of Selected Children](https://leetcode.com/problems/maximize-happiness-of-selected-children) | 🟡 Medium | [maximize-happiness-of-selected-children.cpp](./3351-maximize-happiness-of-selected-children/maximize-happiness-of-selected-children.cpp) |
| 3562 | [Maximum Score of Non-overlapping Intervals](https://leetcode.com/problems/maximum-score-of-non-overlapping-intervals) | 🔴 Hard | [maximum-score-of-non-overlapping-intervals.cpp](./3562-maximum-score-of-non-overlapping-intervals/maximum-score-of-non-overlapping-intervals.cpp) |
| 3705 | [Find the Largest Almost Missing Integer](https://leetcode.com/problems/find-the-largest-almost-missing-integer) | 🟢 Easy | [find-the-largest-almost-missing-integer.cpp](./3705-find-the-largest-almost-missing-integer/find-the-largest-almost-missing-integer.cpp) |
| 3799 | [Unique 3-Digit Even Numbers](https://leetcode.com/problems/unique-3-digit-even-numbers) | 🟢 Easy | [unique-3-digit-even-numbers.cpp](./3799-unique-3-digit-even-numbers/unique-3-digit-even-numbers.cpp) |
| 3811 | [Reverse Degree of a String](https://leetcode.com/problems/reverse-degree-of-a-string) | 🟢 Easy | [reverse-degree-of-a-string.cpp](./3811-reverse-degree-of-a-string/reverse-degree-of-a-string.cpp) |
| 3819 | [Count Covered Buildings](https://leetcode.com/problems/count-covered-buildings) | 🟡 Medium | [count-covered-buildings.cpp](./3819-count-covered-buildings/count-covered-buildings.cpp) |
| 3831 | [Find X Value of Array I](https://leetcode.com/problems/find-x-value-of-array-i) | 🟡 Medium | [find-x-value-of-array-i.cpp](./3831-find-x-value-of-array-i/find-x-value-of-array-i.cpp) |
| 3840 | [Find X Value of Array II](https://leetcode.com/problems/find-x-value-of-array-ii) | 🔴 Hard | [find-x-value-of-array-ii.cpp](./3840-find-x-value-of-array-ii/find-x-value-of-array-ii.cpp) |
| 3842 | [Number of Ways to Assign Edge Weights II](https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-ii) | 🔴 Hard | [number-of-ways-to-assign-edge-weights-ii.cpp](./3842-number-of-ways-to-assign-edge-weights-ii/number-of-ways-to-assign-edge-weights-ii.cpp) |
| 3859 | [Maximum Product of Two Digits](https://leetcode.com/problems/maximum-product-of-two-digits) | 🟢 Easy | [maximum-product-of-two-digits.cpp](./3859-maximum-product-of-two-digits/maximum-product-of-two-digits.cpp) |
| 3869 | [Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index) | 🟢 Easy | [smallest-index-with-digit-sum-equal-to-index.cpp](./3869-smallest-index-with-digit-sum-equal-to-index/smallest-index-with-digit-sum-equal-to-index.cpp) |
| 3870 | [Minimum Moves to Clean the Classroom](https://leetcode.com/problems/minimum-moves-to-clean-the-classroom) | 🟡 Medium | [minimum-moves-to-clean-the-classroom.cpp](./3870-minimum-moves-to-clean-the-classroom/minimum-moves-to-clean-the-classroom.cpp) |
| 3931 | [Process String with Special Operations I](https://leetcode.com/problems/process-string-with-special-operations-i) | 🟡 Medium | [process-string-with-special-operations-i.cpp](./3931-process-string-with-special-operations-i/process-string-with-special-operations-i.cpp) |
| 3939 | [Process String with Special Operations II](https://leetcode.com/problems/process-string-with-special-operations-ii) | 🔴 Hard | [process-string-with-special-operations-ii.cpp](./3939-process-string-with-special-operations-ii/process-string-with-special-operations-ii.cpp) |
| 3962 | [Number of ZigZag Arrays I](https://leetcode.com/problems/number-of-zigzag-arrays-i) | 🔴 Hard | [number-of-zigzag-arrays-i.cpp](./3962-number-of-zigzag-arrays-i/number-of-zigzag-arrays-i.cpp) |
| 3964 | [Number of ZigZag Arrays II](https://leetcode.com/problems/number-of-zigzag-arrays-ii) | 🔴 Hard | [number-of-zigzag-arrays-ii.cpp](./3964-number-of-zigzag-arrays-ii/number-of-zigzag-arrays-ii.cpp) |
| 3995 | [GCD of Odd and Even Sums](https://leetcode.com/problems/gcd-of-odd-and-even-sums) | 🟢 Easy | [gcd-of-odd-and-even-sums.cpp](./3995-gcd-of-odd-and-even-sums/gcd-of-odd-and-even-sums.cpp) |
| 4074 | [Count Subarrays With Majority Element I](https://leetcode.com/problems/count-subarrays-with-majority-element-i) | 🟡 Medium | [count-subarrays-with-majority-element-i.cpp](./4074-count-subarrays-with-majority-element-i/count-subarrays-with-majority-element-i.cpp) |
| 4075 | [Count Subarrays With Majority Element II](https://leetcode.com/problems/count-subarrays-with-majority-element-ii) | 🔴 Hard | [count-subarrays-with-majority-element-ii.cpp](./4075-count-subarrays-with-majority-element-ii/count-subarrays-with-majority-element-ii.cpp) |
| 4080 | [Smallest Missing Multiple of K](https://leetcode.com/problems/smallest-missing-multiple-of-k) | 🟢 Easy | [smallest-missing-multiple-of-k.cpp](./4080-smallest-missing-multiple-of-k/smallest-missing-multiple-of-k.cpp) |
| 4135 | [Concatenate Non-Zero Digits and Multiply by Sum I](https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i) | 🟢 Easy | [concatenate-non-zero-digits-and-multiply-by-sum-i.cpp](./4135-concatenate-non-zero-digits-and-multiply-by-sum-i/concatenate-non-zero-digits-and-multiply-by-sum-i.cpp) |
| 4216 | [Weighted Word Mapping](https://leetcode.com/problems/weighted-word-mapping) | 🟢 Easy | [weighted-word-mapping.cpp](./4216-weighted-word-mapping/weighted-word-mapping.cpp) |
| 4242 | [Sum of GCD of Formed Pairs](https://leetcode.com/problems/sum-of-gcd-of-formed-pairs) | 🟡 Medium | [sum-of-gcd-of-formed-pairs.cpp](./4242-sum-of-gcd-of-formed-pairs/sum-of-gcd-of-formed-pairs.cpp) |
| 4245 | [Count Commas in Range](https://leetcode.com/problems/count-commas-in-range) | 🟢 Easy | [count-commas-in-range.cpp](./4245-count-commas-in-range/count-commas-in-range.cpp) |
| 4248 | [Count Commas in Range II](https://leetcode.com/problems/count-commas-in-range-ii) | 🟡 Medium | [count-commas-in-range-ii.cpp](./4248-count-commas-in-range-ii/count-commas-in-range-ii.cpp) |
| 4256 | [Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i) | 🟢 Easy | [construct-uniform-parity-array-i.cpp](./4256-construct-uniform-parity-array-i/construct-uniform-parity-array-i.cpp) |
| 4258 | [Construct Uniform Parity Array II](https://leetcode.com/problems/construct-uniform-parity-array-ii) | 🟡 Medium | [construct-uniform-parity-array-ii.cpp](./4258-construct-uniform-parity-array-ii/construct-uniform-parity-array-ii.cpp) |
| 4284 | [Smallest Stable Index I](https://leetcode.com/problems/smallest-stable-index-i) | 🟢 Easy | [smallest-stable-index-i.cpp](./4284-smallest-stable-index-i/smallest-stable-index-i.cpp) |
| 4285 | [Smallest Stable Index II](https://leetcode.com/problems/smallest-stable-index-ii) | 🟡 Medium | [smallest-stable-index-ii.cpp](./4285-smallest-stable-index-ii/smallest-stable-index-ii.cpp) |

## 🔄 Syncing

This repo is maintained with [LeetSync](https://github.com/LeetSync/LeetSync) — new accepted submissions are pushed here automatically. Problem folders named `<id>-<slug>` match LeetCode's numbering and URL slugs.

## 📌 Notes

- A few folders contain only the problem statement (`README.md`) with the solution still to be synced — those show `—` in the Solution column.
- `Notes.md` files (where present) hold rough personal notes / solve-time stats.
