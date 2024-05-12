#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

int findTwoEleSum(int *arr, int size, int value, int *iPtr, int *jPtr)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == value)
            {
                *iPtr = i;
                *jPtr=j;
                return 1;
            }
        }
    }
    *iPtr=0;
    *jPtr=0;
    return 0;
}

int main()
{
    int send,val;
    int *ptr,*ptr2;
    int arr[SIZE]={1,5,10,19,3,6,8};
    send=findTwoEleSum(arr,SIZE,val,ptr,ptr2);
    return 0;
}