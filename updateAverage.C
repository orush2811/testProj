#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateAverage(int num1, int num2, float *avg){
   *avg=(num1+num2)/2.0;
    
}

int sumNeighbours(int *ptr, int size){
    int sum;
    for(int i=0;i<size;i++){
        if(ptr[i+1] == ptr[i] + ptr[i+2])
        return 1;
    }
    return 0;
}

int main(){
    int a,b,send;
    float average;
    int elements[5]={1,4,7,3,2};
    // printf("Enter the first number:\n");
    // scanf("%d",&a);
    // printf("Enter the second number:\n");
    // scanf("%d",&b);
     // updateAverage(a,b,&average);
     send=sumNeighbours(elements,5);
    //printf("The average of both numbers is %f\n",average);
    if(send==1)
    printf("The sum of the neighbouring elements is good",send);
    if(send==0)
    printf("The sum of the neighbouring elements is bad",send);
    return 0;
}