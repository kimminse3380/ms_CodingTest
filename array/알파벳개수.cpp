#include <stdio.h>

int main()
{
    char arr1[100] = { 0, };
    scanf("%s", arr1); 
    char memo[26] = { 0, };
    for (int a = 0; a < 100; a++)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr1[a] - 'a' == i) 
                memo[i]++;
        }
    }
    for (int a = 0; a < 26; a++)
    {
        printf("%d ", memo[a]);
    }
    return 0;
}
 