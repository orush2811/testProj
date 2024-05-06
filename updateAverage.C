#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateAverage(int num1, int num2, float *avg)
{
    *avg = (num1 + num2) / 2.0;
}

int sumNeighbours(int *ptr, int size)
{
    int sum;
    for (int i = 1; i < size - 1; i++)
    {
        if (ptr[i] == ptr[i - 1] + ptr[i + 1])
            return 1;
    }
    return 0;
}

int sortedOrNot(int *ptr, int size, int *result){
  *result=1; // Assuming the array is really sorted
  for(int i=1;i<size;i++){
    if(ptr[i]<=ptr[i-1])
    *result=0; // The array is not sorted
    if(ptr[i]<ptr[i-1])
    return 0;
  }
  return 1;
}

int main()
{
    int a, b, send,sort,check;
    float average;
    int elements[5] = {1, 4, 7, 3, 2}; // 1,4,1,4,2 for bad if needed,1,4,7,3,2 is the good array, 1,2,3,4,5 to check for the sortedOrNot function
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    updateAverage(a, b, &average);
    send = sumNeighbours(elements, 5);
    sort=sortedOrNot(elements,5,&check);
    if(sort == 0)
    printf("The array is not sorted!\n",sort);
    if(sort == 1)
    printf("The array is sorted!\n",sort);
    printf("The average of both numbers is %f\n", average);
    if (send == 1)
        printf("The sum of the neighbouring elements is good", send);
    if (send == 0)
        printf("The sum of the neighbouring elements is bad", send);
    return 0;

}