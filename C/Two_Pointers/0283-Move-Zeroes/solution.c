void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeroes(int* nums, int numsSize)
{
    int l = 0;
    for(int r = 0; r < numsSize; r++)
    {
        if(nums[r] != 0)
        {
            swap(&nums[l], &nums[r]);
            l++;
        }
    }
}