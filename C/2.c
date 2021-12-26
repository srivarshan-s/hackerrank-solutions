#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    char str[10];
    char sentence[20];
    scanf("%c", &ch);
    scanf("%s", str);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);
    return 0;
}

