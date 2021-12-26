#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *word[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int userNum;
    scanf("%d", &userNum);
    if (1 <= userNum && 9 >= userNum)
    {
        int i;
        for (i = 0; i < 9; i++)
        {
            if (num[i] == userNum)
            {
                printf("%s\n", word[i]);
            }
        }
    }
    else
    {
        printf("Greater than 9\n");
    }
    return 0;
}