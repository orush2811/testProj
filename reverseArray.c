#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 4


void swap(char* ptr1, char* ptr2){
   int temp;
   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;
}

void printArr(char *arr,int size){
   for(int i=0;i<size;i++){
    printf("%c ",arr[i]);
   }
}

int main(){
    
    char arr[SIZE]={'a','f','k','d'};
    
    return 0;
}