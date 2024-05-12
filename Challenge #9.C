#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7

int findTwoEleSum(int *arr, int size, int value, int *iPtr, int *jPtr)
{
   int i,j,currentSum=0;
   i=0,j=size-1;
   while(i<j){
    currentSum=arr[i]+arr[j];
    if(currentSum==value){
        *iPtr=i;
        *jPtr=j;
        return 1;
    }
    else if(currentSum<value)
    i++;
    else
    j--;
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
    if(send==1)
    printf("The value of the two elements match!\n");
    else
    return 0;
}