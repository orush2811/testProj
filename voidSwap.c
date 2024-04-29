#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void * memcpy(void *dest, const void *src, size_t num) - Copies size bytes of the source to the destination

void genericSwap(void* a, void* b, int size){ // We assume that size > 0
    void* tempMem = malloc(size);
    memcpy(tempMem,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMem,size);
    free(tempMem);

}

void main(){
    int num1=5, num2=7;
    double average1=90.5,average2=98.2;
    genericSwap(&average1,&average2,sizeof(double));
    genericSwap(&num1,&num2,sizeof(int));
    printf("The average is %f, and average 2 is %f",average1,average2);
    printf("After swap - average is %f, average 2 is %f",average1,average2);
   
}