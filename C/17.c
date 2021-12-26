#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    //Write your code here.
    int sum = 0;
    if (gender == 'b')
    {
        if (number_of_students % 2 == 0) number_of_students /= 2;
        else number_of_students = (number_of_students / 2) + 1;
        int i = 0;
        while (i < number_of_students)
        {
            sum += *marks;
            marks += 2;
            i++;
        }
    }
    else
    {
        int i = 0;
        number_of_students = (number_of_students / 2);
        marks += 1;
        while (i < number_of_students)
        {
            sum += *marks;
            marks += 2;
            i++;
        }
    }
    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d\n", sum);
    free(marks);

    return 0;
}