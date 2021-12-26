#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%[^\n]%*c", str);
    int i = 0;
    while (i < strlen(str))
    {
        if (str[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
        ++i;
    }
    printf("\n");
    return 0;
}