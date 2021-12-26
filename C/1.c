#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[25];
    scanf("%[^\n]%*c", str);
    printf("Hello, World!\n");
    printf("%s\n", str);
    return 0;
}
