#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t);

int main()
{
    char s[100], t[100];

    printf("Enter the first string: ");
    scanf("%99s", s);

    printf("Enter the second string: ");
    scanf("%99s", t);

    if(isAnagram(s, t))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}

bool isAnagram(char* s, char* t)
{
    int count[26] = {0};

    for(int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    for(int i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
            return false;
    }

    return true;
}