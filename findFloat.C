#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3


int isSpecialFloatingSorted(double *ptr, int size){
    int left,right;
    double leftFrac,rightFrac;
    if(size==1)
    return 1;
    left=(int)ptr[0];
    right=(int)ptr[1];
    leftFrac=ptr[0]-left;
    rightFrac=ptr[1]-right;
    if(left<=right && leftFrac>=rightFrac)
        return isSpecialFloatingSorted(ptr+1,size-1);
    else
    return 0;
    
}

int main(){

    double arr[SIZE]={1.4,3.25,4.2};
    int test;
    test=isSpecialFloatingSorted(arr,SIZE);
    if(test==1)
    printf("Success!",test);
    else
    return 0;

}