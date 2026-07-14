#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int numsSize;
    int target;
    int returnSize;
printf("\nenter numsize ");
    // Read array size
    scanf("%d", &numsSize);

    // Allocate memory for array
    int *nums = (int *)malloc(numsSize * sizeof(int));

    // Read array elements
    printf("\nenter array ");
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    printf("\nenter targert ");
    // Read target
    scanf("%d", &target);

    // Call function
    int *result = twoSum(nums, numsSize, target, &returnSize);

    // Print result
    printf("\nResult\n ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    free(nums);

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // If no solution exists
    result[0] = -1;
    result[1] = -1;
    return result;
}