#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

void swap(int *ptr1, int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}

void swapOn(int *arr1,int *arr2){
for(int i=0;i<SIZE;i++){
    swap(&arr1[i],&arr2[i]);
}
}

void printArr(int *arr){
    int i;
    for(i=0;i<SIZE;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main(){

    int Array1[SIZE]={1,2,3,4,5};
    int Array2[SIZE]={6,7,8,9,10};
    printf("The array values before swapping are:\n");
    printArr(Array1);
    printArr(Array2);
    printf("After swapping:\n");
    swapOn(Array1,Array2);
    printArr(Array1);
    printArr(Array2);
    return 0;
}