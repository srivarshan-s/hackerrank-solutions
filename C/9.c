#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i, j, maxAnd = 0, maxOr = 0, maxXor = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != j && (i & j) > maxAnd && (i & j) < k)
            {
                maxAnd = (i & j);
            }
            if (i != j && (i | j) > maxOr && (i | j) < k)
            {
                maxOr = (i | j);
            }
            if (i != j && (i ^ j) > maxXor && (i ^ j) < k)
            {
                maxXor = (i ^ j);
            }
        }
    }
    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d\n", maxXor);
    return 0;
}