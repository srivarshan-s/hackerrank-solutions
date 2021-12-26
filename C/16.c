#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    int x, y, z;
    switch (n)
    {
    case 1:
        return a;
    case 2:
        return b;
    case 3:
        return c;
    case 4:
        return a + b + c;
    default:
        x = find_nth_term(n - 1, a, b, c);
        y = find_nth_term(n - 2, a, b, c);
        z = find_nth_term(n - 3, a, b, c);
        return (x + y + z);
    }
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d\n", ans);
    return 0;
}