#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    float x, y;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &x);
    scanf("%f", &y);
    printf("%d ", (a + b));
    printf("%d\n", (a - b));
    printf("%.1f ", (x + y));
    printf("%.1f\n", (x - y));
    return 0;
}
