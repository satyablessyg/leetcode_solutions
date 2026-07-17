#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareChars(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes)
{
    int visited[strsSize];

    for (int i = 0; i < strsSize; i++)
        visited[i] = 0;

    char **sortedStrs = (char **)malloc(sizeof(char *) * strsSize);

    for (int i = 0; i < strsSize; i++)
    {
        sortedStrs[i] = strdup(strs[i]);
        qsort(sortedStrs[i], strlen(sortedStrs[i]), sizeof(char), compareChars);
    }

    char ***result = (char ***)malloc(sizeof(char **) * strsSize);
    *returnColumnSizes = (int *)malloc(sizeof(int) * strsSize);

    *returnSize = 0;

    for (int i = 0; i < strsSize; i++)
    {
        if (visited[i] == 1)
            continue;

        result[*returnSize] = (char **)malloc(sizeof(char *) * strsSize);

        int size = 0;

        result[*returnSize][size++] = strs[i];
        visited[i] = 1;

        for (int j = i + 1; j < strsSize; j++)
        {
            if (visited[j] == 1)
                continue;

            if (strcmp(sortedStrs[i], sortedStrs[j]) == 0)
            {
                result[*returnSize][size++] = strs[j];
                visited[j] = 1;
            }
        }

        (*returnColumnSizes)[*returnSize] = size;
        (*returnSize)++;
    }

    for (int i = 0; i < strsSize; i++)
        free(sortedStrs[i]);

    free(sortedStrs);

    return result;
}

int main()
{
    char *strs[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    int returnSize;
    int *returnColumnSizes;

    char ***result = groupAnagrams(strs, strsSize, &returnSize, &returnColumnSizes);

    printf("Grouped Anagrams:\n");

    for (int i = 0; i < returnSize; i++)
    {
        printf("{ ");
        for (int j = 0; j < returnColumnSizes[i]; j++)
        {
            printf("%s ", result[i][j]);
        }
        printf("}\n");
    }

    for (int i = 0; i < returnSize; i++)
        free(result[i]);

    free(result);
    free(returnColumnSizes);

    return 0;
}