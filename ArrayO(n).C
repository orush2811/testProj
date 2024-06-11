#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5


/// TEST TEST TEST123213
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swapOn(int *arr1, int *arr2)
{
    for (int i = 0; i < SIZE; i++)
    {
        swap(&arr1[i], &arr2[i]);
    }
}

void swapO1(int **ptr1, int **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArr(int *arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *generateArr(int size)
{
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main()
{
    int *Arr1, *Arr2;
    int sizeArr1, sizeArr2;
    printf("Enter the size for Arr 1: ");
    scanf("%d", &sizeArr1);
    printf("Enter the size for Arr 2: ");
    scanf("%d", &sizeArr2);
    Arr1 = generateArr(sizeArr1);
    Arr2 = generateArr(sizeArr2);
    swapO1(&Arr1,&Arr2);
    int Array1[SIZE] = {1, 2, 3, 4, 5};
    int Array2[SIZE] = {6, 7, 8, 9, 10};
    printf("The array values before swapping are:\n");
    printArr(Array1);
    printArr(Array2);
    printf("After swapping:\n");
    swapOn(Array1, Array2);
    printArr(Array1);
    printArr(Array2);
    return 0;
}