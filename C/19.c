#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lexicBool(char *str1, char *str2)
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int retVal = 0;
    int n = (n1 >= n2) ? n1 : n2;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] < str2[i])
        {
            retVal = 0;
            break;
        }
        if (str1[i] > str2[i])
        {
            retVal = 1;
            break;
        }
    }
    return retVal;
}


int next_permutation(int n, char **s)
{
    int flag = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (lexicBool(s[i + 1], s[i]))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 0;
    int k = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (lexicBool(s[i + 1], s[i]))
        {
            k = i;
        }
    }
    int l = k;
    for (int i = k; i < n; ++i)
    {
        if (lexicBool(s[i], s[k]))
        {
            l = i;
        }
    }
    char *temp;
    temp = (char *)malloc(1024 * sizeof(char *));
    temp = s[k];
    s[k] = s[l];
    s[l] = temp;
    for (int i = 1; i <= (n - k) / 2; ++i)
    {
        temp = s[k + i];
        s[k + i] = s[n - i];
        s[n - i] = temp;
    }
    return 1;
}


int main()
{
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do
    {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}
