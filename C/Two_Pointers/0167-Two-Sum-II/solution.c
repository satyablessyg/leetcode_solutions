int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int* result = malloc(2 * sizeof(int));

    int i = 0;
    int j = numbersSize - 1;

    while(i < j)
    {
        int temp = numbers[i] + numbers[j];

        if(temp == target)
        {
            result[0] = i + 1;
            result[1] = j + 1;

            *returnSize = 2;

            return result;
        }

        else if(temp < target)
        {
            i++;
        }

        else
        {
            j--;
        }
    }

    *returnSize = 0;
    free(result);

    return NULL;
}