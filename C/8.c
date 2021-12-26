#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, i;
    scanf("%d", &num);
    for (i = 0; i < 5; i++)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("%d\n", sum);
    return 0;
}