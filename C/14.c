#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printFreq(int num, char str[])
{
    int len = strlen(str);
    int count = 0;
    char charNum;
    charNum = num + '0';
    for (int i = 0; i < len; i++)
    {
        if (str[i] == charNum)
        {
            count++;
        }
    }
    printf("%d ", count);
}

int main()
{
    char str[1000];
    scanf("%s", &str);
    for (int i = 0; i < 10; i++)
    {
        printFreq(i, str);
    }
    printf("\n");
    return 0;
}