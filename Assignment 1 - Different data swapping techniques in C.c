#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapInts(int* pNum1, int* pNum2){ // Function 1
    int temp;
    temp=*pNum1;
    *pNum1=*pNum2;
    *pNum2=temp;

}

void swapIntsNoThird(int *pNum1, int* pNum2){ // Function 2 - without third variable
    *pNum1 = *pNum1 + * pNum2;
    *pNum2 = *pNum1 - * pNum2;
    *pNum1 = *pNum1 - * pNum2;
}

void swapIntsNoThird2(int *pNum1, int *pNum2){ // Function 3 - without third variable
    *pNum1 = *pNum1 * *pNum2;
    *pNum2 = *pNum1 / *pNum2;
    *pNum1 = *pNum1 / *pNum2;
}

void genericSwap(void* a, void* b, int size){ // We assume that size > 0
    void* tempMem = malloc(size);
    memcpy(tempMem,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMem,size);
    free(tempMem);

}

void main(){
    int a=10,b=20;
    printf("swapInts function - before swapping - number a is %d,number b is %d\n",a,b);
    swapInts(&a,&b);
    printf("swapInts function - after swapping - number a is %d,number b is %d\n",a,b);

    printf("swapIntsNoThird function - before swapping - number a is %d,number b is %d\n",a,b);
    swapIntsNoThird(&a,&b);
    printf("swapIntsNoThird function - after swapping - number a is %d,number b is %d\n",a,b);

    printf("swapIntsNoThird2 function - before swapping - number a is %d,number b is %d\n",a,b);
    swapIntsNoThird2(&a,&b);
    printf("swapIntsNoThird2 function - after swapping - number a is %d,number b is %d\n",a,b);

    printf("genericSwap function - before swapping - number a is %d,number b is %d\n",a,b);
    genericSwap(&a,&b,sizeof(int));
    printf("genericSwap function - after swapping - number a is %d,number b is %d\n",a,b);

}