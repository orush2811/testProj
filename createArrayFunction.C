#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int *arr;
    arr = createArray();
    printArr(arr, SIZE);
}

int *createArray()
{
    int i;
    int myArr[SIZE];
    printf("Enter %d elements into you array");
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number: %d ", i);
        scanf("%d", &myArr[i]);
    }
    return myArr;
}