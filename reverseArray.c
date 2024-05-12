#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5


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
       printf("Value at %d appears %d times!\n",arr,countVal);
   }
}

void reverseArrRecursive(char *arr, int size){
   if(size>1){
      swap(&arr[0],&arr[size-1]); // Can also use swap(arr,arr+size-1)
      reverseArrRecursive(arr+1,size-2);
   }
  
}

int findSecondSmallest(int *arr, int size){
   int i;
   int min1=arr[0],min2=arr[0];
   for(i=1;i<size;i++){
      if(arr[i]<min1){
         min2=min1;
         min1=arr[i];
      }
      else if (arr[i]<min2){
         min2=arr[i];
      }
   }
   return min2;
}

int main(){
    
    char arr[SIZE]={'a','f','k','d','g'};
    int arr2[SIZE]={1,2,1,3,5};
    int arr3[SIZE]={6,14,8,9,4}; // 5,13,7,4,9
    int small;
    printf("The array of characters before swapping:\n");
    printArr(arr,SIZE);
    reverseArrRecursive(arr,SIZE);
    printf("The array of characters after swapping:\n");
    printArr(arr,SIZE);
   printValuesFreq(arr2,SIZE);
   small=findSecondSmallest(arr3,SIZE);
   printf("The second smallet in the array is %d",small);
    
    return 0;
}