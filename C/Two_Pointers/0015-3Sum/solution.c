#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    // Sort the array to use two-pointer technique and skip duplicates easily
    qsort(nums, numsSize, sizeof(int), compare);

    int capacity = 10000; // Initial capacity for result triplets
    int count = 0;

    int** result = (int**)malloc(sizeof(int*) * capacity);
    *returnColumnSizes = (int*)malloc(sizeof(int) * capacity);

    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicate values for the first element
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        // If the smallest element is > 0, no three numbers can sum to 0
        if (nums[i] > 0) break;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                // Resize buffer if capacity is reached
                if (count >= capacity) {
                    capacity *= 2;
                    result = (int**)realloc(result, sizeof(int*) * capacity);
                    *returnColumnSizes = (int*)realloc(*returnColumnSizes, sizeof(int) * capacity);
                }

                // Allocate memory for the triplet
                result[count] = (int*)malloc(sizeof(int) * 3);
                result[count][0] = nums[i];
                result[count][1] = nums[left];
                result[count][2] = nums[right];
                (*returnColumnSizes)[count] = 3;
                count++;

                // Skip duplicate values for left and right pointers
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    *returnSize = count;
    return result;
}