// Sorting Array of Strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort = 1;
int lexicographic_sort_reverse = 2;
int sort_by_length = 3;
int sort_by_number_of_distinct_characters = 4;

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

int distChar(char *str)
{
    int count = 0;
    int flag;
    for (int i = 0; i < strlen(str); ++i)
    {
        flag = 1;
        for (int j = 0; j < i; ++j)
        {
            if (str[i] == str[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            count++;
    }
    return count;
}

void string_sort(char **arr, int n, int sort_type)
{
    char *temp;
    temp = malloc(1024 * sizeof(char *));
    if (sort_type == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = 0; j < n; j++)
            {
                if (lexicBool(arr[min], arr[j]) == 0)
                {
                    min = j;
                }
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
    else if (sort_type == 2)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = 0; j < n; j++)
            {
                if (lexicBool(arr[min], arr[j]))
                {
                    min = j;
                }
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
    else if (sort_type == 3)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i; j < n; j++)
            {
                if (strlen(arr[j]) < strlen(arr[min]))
                {
                    min = j;
                }
                else if (strlen(arr[j]) == strlen(arr[min]))
                {
                    if (lexicBool(arr[min], arr[j]))
                    {
                        min = j;
                    }
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    else if (sort_type == 4)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i; j < n; ++j)
            {
                if (distChar(arr[j]) < distChar(arr[min]))
                {
                    min = j;
                }
                else if (distChar(arr[j]) == distChar(arr[min]))
                {
                    if (lexicBool(arr[min], arr[j]))
                    {
                        min = j;
                    }
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr;
    arr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s %d\n", arr[i], distChar(arr[i]));

    printf("\n");
    return 0;
}