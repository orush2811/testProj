#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

void printBinary(int n)
{
    if (n <= 1)
        printf("% d", n);
    else
    {
        printf("% d ", n % 2); // 6%2==0,3%2==1,1%1==1(1 hits the if condition and therefore prints 1)
        printBinary(n / 2);
    }
}

int main()
{
    printBinary(8);
    return 0;
}