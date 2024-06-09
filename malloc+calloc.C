#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int DynamicArray(int *ptr){

    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=i+1;
        printf("Arr in position %d is %d",i,ptr[i]);
        printf("\n");
    }

    return *ptr;
}


int main(){
    int arr[5];
    int x=DynamicArray(arr);
    return 0;
}