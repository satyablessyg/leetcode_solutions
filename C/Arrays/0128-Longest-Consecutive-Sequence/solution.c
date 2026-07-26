#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    // 1. Sort using standard qsort (O(n log n))
    qsort(nums, numsSize, sizeof(int), compare);

    int maxCount = 1;
    int count = 1;

    // 2. Linear scan to find the longest consecutive sequence
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            continue; // Skip duplicate numbers
        } else if (nums[i] + 1 == nums[i + 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 1; // Reset count for the next sequence
        }
    }

    if (count > maxCount) {
        maxCount = count;
    }

    return maxCount;
}