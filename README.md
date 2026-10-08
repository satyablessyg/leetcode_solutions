# LeetCode Solutions (C)

My solutions to [LeetCode](https://leetcode.com/) problems, written in C. This repo is where I track my problem-solving practice as I build up my DSA fundamentals.

## Structure

Solutions are organized by topic, then by problem (numbered and named to match LeetCode):

```
leetcode_solutions/
│
├── C/
   ├── Arrays/
   │   ├── 0001-Two-Sum/
   │   ├── 0128-Longest-Consecutive-Sequence/
   │   ├── 0169-Majority-Element/
   │   ├── 0217-Contains-Duplicate/
   │   ├── 0238-Product-of-Array-Except-Self/
   │   └── 1464-Maximum_Product_of_Two_Elements_in_an_Array/
   │
   ├── Strings/
   │   └── 0242-Valid-Anagram/
   │
   └── Two_Pointers/
       ├── 0011-Container-With-Most-Water/
       ├── 0015-3Sum/
       ├── 0042-Trapping-Rain-Water/
       ├── 0075-Sort-Colors/
       ├── 0167-Two-Sum-II/
       └── 0283-Move-Zeroes/



```

Each problem folder contains a single `solution.c` file with a working solution, including a `main()` for a few that reads input and calls the solution function so it can be compiled and run standalone.

## Problems Solved

Auto-generated from the folder structure — run `python3 generate_readme_table.py` after adding a new solution to refresh this table.

<!-- PROBLEMS_TABLE_START -->
| # | Problem | Topic |
|---|---------|-------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Arrays |
| 15 | [3Sum](https://leetcode.com/problems/3Sum/) | Two Pointers |
| 36 | [Valid Sudoko](https://leetcode.com/problems/valid-sudoko/) | Arrays |
| 49 | [Group Anagram](https://leetcode.com/problems/group-anagram/) | Arrays |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | Arrays |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Arrays |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Arrays |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Strings |
| 347 | [Top k Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Arrays |
| 347 | [Maximum Product of Two Elemnts in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/) | Arrays |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | Two Pointers |
| 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | Two Pointers |
| 167 | [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Two Pointers |
| 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | Two Pointers |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Two Pointers |
<!-- PROBLEMS_TABLE_END -->

## Running a Solution

Each solution is self-contained. Compile and run any file directly, e.g.:

```bash
gcc C/Arrays/0001-Two-Sum/solution.c -o two_sum
./two_sum
```

## About

I'm a second-year CSE student using this repo to build consistent DSA practice. More problems will be added as I go.
