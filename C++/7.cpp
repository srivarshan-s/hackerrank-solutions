#include <stdio.h>

int max(int num1, int num2, int num3, int num4) {
    int max = 0;
    if (num1 >= max) {
        max = num1;
    }
    if (num2 >= max) {
        max = num2;
    }
    if (num3 >= max) {
        max = num3;
    }
    if (num4 >= max) {
        max = num4;
    }
    return max;
}

int main() {
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    int greatest = max(num1, num2, num3, num4);
    printf("%d\n", greatest);
}