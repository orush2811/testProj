#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

void printFromLeft(int *ptr, int size)
{
    if (size > 0)
    {
        printf(" %d ", ptr[0]);
        printFromLeft(ptr + 1, size - 1);
    }
}

void printFromRight(int *ptr, int size)
{

    if (size > 0)
    {
        printf("% d ", ptr[size - 1]);
        printFromRight(ptr, size - 1);
    }
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    printFromLeft(arr, SIZE);
    printf("\n");
    printFromRight(arr, SIZE);
    return 0;
}