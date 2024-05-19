#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 4

int sumArray(int arr[], int size)
{ // Can also use (int *ptr)

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i]; // sum+=ptr[i];
    return sum;
}

int searchEleInArray(int *ptr, int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == ele)
            return 1;
    }
    return 0;
}

void displayArray(int *ptr, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Value #%d is %d\n", i + 1, ptr[i]);
    }
}

int findMaxValue(int *ptr, int size)
{
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (ptr[i] > ptr[i + 1])
        {
            max = ptr[i];
        }
    }
    return max;
}

int main()
{

    int grades[3] = {3, 5, 7}, result = 0, result2 = 0, key, maxvalue;
    int grades2[4] = {80, 85, 72, 90};
    result = sumArray(grades, 3);
    displayArray(grades2, 4);
    printf("Enter the desired element you would like to search");
    scanf("%d", &key);
    result2 = searchEleInArray(grades2, SIZE, key);
    maxvalue = findMaxValue(grades2, SIZE);
    printf("The sum of the array is %d\n", result);
    if (result2 == 0)
        printf("The element %d is not in our array!\n", key);
    else
        printf("The element %d is in our array!\n", key);
    printf("The maximum value in our array is %d\n", maxvalue);
}