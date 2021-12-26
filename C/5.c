#include <stdio.h>
#include <stdlib.h>

void myFunc(int *ptr1, int *ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = abs(*ptr1 - *ptr2 - *ptr2);
}

int main()
{
    int *ptr1, *ptr2;
    int val1, val2;
    scanf("%d", &val1);
    scanf("%d", &val2);
    ptr1 = &val1;
    ptr2 = &val2;
    myFunc(ptr1, ptr2);
    val1 = *ptr1;
    val2 = *ptr2;
    printf("%d\n", val1);
    printf("%d\n", val2);
    return 0;
}
