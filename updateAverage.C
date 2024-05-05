#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateAverage(int num1, int num2, float *avg){
   *avg=(num1+num2)/2.0;
    
}


int main(){
    int a,b;
    float average;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    updateAverage(a,b,&average);
    printf("The average of both numbers is %f\n",average);
    return 0;
}