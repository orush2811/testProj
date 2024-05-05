#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void minMax(int *pArr,int size,int *minval, int *maxval){
    *minval = pArr[0];
    *maxval = pArr[0];
    for(int i=1;i<size;i++){
        if(pArr[i]<*minval)
        *minval=pArr[i];
        if(pArr[i]>*maxval)
        *maxval=pArr[i];
    }


}

int main(){

    int myGrades[]={80,90,100,75};
    int min,max;
    minMax(myGrades,4,&min,&max);
    printf("The minimum value in your grades array is %d\n",min);
    printf("The maximum value in your grades array is %d\n",max);
}