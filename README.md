# LeetCode Solutions (C)

My solutions to [LeetCode](https://leetcode.com/) problems, written in C. This repo is where I track my problem-solving practice as I build up my DSA fundamentals.

## Structure

Solutions are organized by topic, then by problem (numbered and named to match LeetCode):

```
C/
├── Arrays/
│   ├── 0001-Two-Sum/
│   ├── 0036-Valid-Sudoko/
│   ├── 0049-Group-Anagram/
│   ├── 0217-Contains-Duplicate/
│   ├── 0238-Product-of-Array-Except-Self/
│   └── 0347-Top-k-Frequent-Elements/
└── Strings/
    └── 0242-Valid-Anagram/
```

Each problem folder contains a single `solution.c` file with a working solution, including a `main()` for a few that reads input and calls the solution function so it can be compiled and run standalone.

## Problems Solved

Auto-generated from the folder structure — run `python3 generate_readme_table.py` after adding a new solution to refresh this table.

<!-- PROBLEMS_TABLE_START -->
| # | Problem | Topic |
|---|---------|-------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Arrays |
| 36 | [Valid Sudoko](https://leetcode.com/problems/valid-sudoko/) | Arrays |
| 49 | [Group Anagram](https://leetcode.com/problems/group-anagram/) | Arrays |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Arrays |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Arrays |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Strings |
| 347 | [Top k Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Arrays |
<!-- PROBLEMS_TABLE_END -->

## Running a Solution

Each solution is self-contained. Compile and run any file directly, e.g.:

```bash
gcc C/Arrays/0001-Two-Sum/solution.c -o two_sum
./two_sum
```

## About

I'm a second-year CSE student using this repo to build consistent DSA practice. More problems will be added as I go.
