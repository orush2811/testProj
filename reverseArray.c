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
   printf("\n");
}

void reverseArrIterative(char *arr, int size){
   for(int i=0;i<size/2;i++){
      swap(&arr[i],&arr[size-1-i]);
   }
}

void printValuesFreq(int *arr, int size){
   int i,j,leftFlag,countVal=0;
   for(i=0;i<size;i++){
      countVal=1;
      leftFlag=0;
      // For the left part of the array
      for(j=0;j<i;j++){
         if(arr[j]==arr[i]){
            leftFlag=1;
            break;
         }
         
      }
      // For the right part of the array
      if(leftFlag==1){
         continue;
      }
      for(j=i+1;j<size;j++){
         if(arr[j]==arr[i])
         countVal++;
      }
   }
}

void reverseArrRecursive(char *arr, int size){
   if(size>1){
      swap(&arr[0],&arr[size-1]); // Can also use swap(arr,arr+size-1)
      reverseArrRecursive(arr+1,size-2);
   }

}

int main(){
    
    char arr[SIZE]={'a','f','k','d'};
    printf("The array of characters before swapping:\n");
    printArr(arr,SIZE);
    reverseArrRecursive(arr,SIZE);
    printf("The array of characters after swapping:\n");
    printArr(arr,SIZE);

    
    return 0;
}