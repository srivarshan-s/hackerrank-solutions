#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, sum = 0;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}