#include <stdio.h>
#include <stdlib.h>

void display(int min, int max)
{
    int num = max;
    int numRev[max];
    int j = 0;
    for (int i = 0; i < max; i++)
    {
        printf("%d ", num);
        numRev[j] = num;
        j++;
        if (num > min)
        {
            num--;
        }
    }
    int x = 0, y = max - 1;
    while (x < y)
    {
        int temp = numRev[x];
        numRev[x] = numRev[y];
        numRev[y] = temp;
        x++;
        y--;
    }
    
    for (int i = 1; i < max; i++)
    {
        printf("%d ", numRev[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        display(i, n);
    }
    for (int i = 2; i <= n; i++)
    {
        display(i, n);
    }
    return 0;
}