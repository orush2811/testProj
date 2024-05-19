#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5


int maxAdjacentSum(int *ptr,int size){

    int currSum,maxSum;
    if(size==2)
    return ptr[0]+ptr[1]; // Maximum with only 2 elements in the array
    currSum=ptr[0]+ptr[1];
    maxSum=maxAdjacentSum(ptr+1,size-1);
    if(maxSum>currSum)
    return maxSum;
    else
    return currSum;
}

int main(){
    int arr[SIZE]={1,2,4,3,1};
    int test;
    test=maxAdjacentSum(arr,SIZE);
    printf("The sum is %d ",test);
    return 0;
}