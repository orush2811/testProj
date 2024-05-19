#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 8

double findArrayAverage(double *ptr, int size)
{
    double avgSoFar;
    if (size == 1)
        return ptr[0];
    avgSoFar = findArrayAverage(ptr + 1, size - 1);
    return (avgSoFar * (size - 1) + ptr[0]) / size;
}

int main()
{

    double arr[SIZE] = {1, 2, 5, 9, 10, 8, 7, 20};
    double test;
    test=findArrayAverage(arr,SIZE);
    printf("The sum of the elements is %lf",test);
    return 0;
}