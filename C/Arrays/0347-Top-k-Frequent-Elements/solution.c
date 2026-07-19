#include <stdio.h>
#include <stdlib.h>

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize);

int main()
{
    int nums[] = {1, 1, 1, 2, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    int returnSize;

    int *result = topKFrequent(nums, numsSize, k, &returnSize);

    printf("Top %d Frequent Elements:\n", k);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);

    return 0;
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize)
{
    int *freq = (int *)malloc(sizeof(int) * numsSize);
    int *visited = (int *)calloc(numsSize, sizeof(int));
    int *result = (int *)malloc(sizeof(int) * k);

    // Count frequency of each element
    for (int i = 0; i < numsSize; i++)
    {
        if (visited[i] == 1)
            continue;

        freq[i] = 0;

        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                freq[i]++;
                if (i != j)
                    visited[j] = 1;
            }
        }
    }

    // Find top k frequent elements
    for (int t = 0; t < k; t++)
    {
        int max = -1;
        int index = -1;

        for (int i = 0; i < numsSize; i++)
        {
            if (visited[i] != -1 && freq[i] > max)
            {
                max = freq[i];
                index = i;
            }
        }

        result[t] = nums[index];

        // Mark as already selected
        freq[index] = -1;
    }

    *returnSize = k;

    free(freq);
    free(visited);

    return result;
}