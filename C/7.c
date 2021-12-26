#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *word[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &start);
    scanf("%d", &end);
    int i;
    for (i = start; i <= end; i++)
    {
        if (i <= 9 && i >= 1)
        {
            printf("%s\n", word[i - 1]);
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
    return 0;
}