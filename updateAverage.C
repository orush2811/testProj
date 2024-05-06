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
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    updateAverage(a,b,&average);
    printf("The average of both numbers is %f\n",average);
    return 0;
}