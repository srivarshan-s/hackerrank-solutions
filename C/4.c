#include <stdio.h>
#include <stdlib.h>

int getMax(int num1, int num2, int num3, int num4) {
    int i = 0;
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    return max;
}

int main() {
    int num1, num2, num3, num4;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    int max = getMax(num1, num2, num3, num4);
    printf("%d", max);
    return 0;
}
