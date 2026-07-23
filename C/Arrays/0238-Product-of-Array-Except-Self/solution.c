#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize);

int main()
{
    int numsSize;

    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int *nums = (int *)malloc(numsSize * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int *result = productExceptSelf(nums, numsSize, &returnSize);

    printf("Output:\n");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(nums);
    free(result);

    return 0;
}

int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;

    int *answer = (int *)malloc(numsSize * sizeof(int));

    answer[0] = 1;
    for (int i = 1; i < numsSize; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    return answer;
}