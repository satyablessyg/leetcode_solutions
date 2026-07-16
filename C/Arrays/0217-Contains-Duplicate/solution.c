#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void* a, const void* b);
bool containsDuplicate(int* nums, int numsSize);

int main()
{
    int numsSize;

    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int *nums = (int *)malloc(numsSize * sizeof(int));

    printf("Enter the array elements:\n");
    for(int i = 0; i < numsSize; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    if(containsDuplicate(nums, numsSize))
        printf("The array contains duplicate elements.\n");
    else
        printf("The array does not contain duplicate elements.\n");

    free(nums);

    return 0;
}

int compare(const void* a, const void* b)
{
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;

    if(num1 < num2)
        return -1;
    if(num1 > num2)
        return 1;
    return 0;
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    for(int i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] == nums[i + 1])
            return true;
    }

    return false;
}