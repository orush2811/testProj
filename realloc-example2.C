#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *grades = NULL;
    int totalGrades;
    int *temp = NULL;

    printf("Enter your total grades: ");
    scanf("%d", &totalGrades);
    grades = (int *)malloc(totalGrades * sizeof(int));
    if (grades == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    for (int i = 0; i < totalGrades; i++)
    {
        printf("Enter your grades: ");
        scanf("%d", &grades[i]);
    }
    for (int i = 0; i < totalGrades; i++)
    {
        printf("grade at index %d is %d \n", i, grades[i]);
    }
    totalGrades = totalGrades + 2;
    temp = (int *)realloc(grades, totalGrades * sizeof(int));
    if (temp != NULL)
    {
        grades = temp;
        for (int i = totalGrades - 2; i < totalGrades; i++)
        {
            printf("Enter the new grades into the array: ");
            scanf("%d", &grades[i]);
        }
        for (int i = totalGrades-2; i < totalGrades; i++)
        {
            printf("The new index in %d is %d \n", i, grades[i]);
        }
    }
    else
    {
        printf("Memory reallocation failed\n");
        free(grades); // Free the originally allocated memory
        return 1;
    }

    free(grades);
    return 0;
}
