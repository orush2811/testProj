#include <stdio.h>
#include <stdlib.h>

void SwapFunc(int *pNum1, int *pNum2){

int temp;
temp=*pNum1;
*pNum1=*pNum2;
*pNum2=temp;

}

void main(){ // CTRL + K + C to comment multiple lines, CTRL + K + U to uncomment

    int a,b,c=5;
    void *ptr=&c;
    printf("Enter number one:\n");
    scanf("%d",&a);
    printf("Enter number two:\n");
    scanf("%d",&b);
    printf("Before swapping the numbers:\na=%d\nb=%d\n",a,b);
    SwapFunc(&a,&b);
    printf("After swapping the numbers:\na=%d\nb=%d\n",a,b);
    printf("The value of c is %d\n",*(int*)ptr);
    
}
