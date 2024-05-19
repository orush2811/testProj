#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6

int isPalindrom(int *ptr, int size)
{

    if (size <= 1) // An array with 0 or 1 elements is considered a palindrome
        return 1;
    if (ptr[0] != ptr[size - 1])
        return 0; // The array is not a palindrome
    else
        return isPalindrom(ptr + 1, size - 2);
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 3, 2, 1};
    int check;
    check = isPalindrom(arr, SIZE);
    if (check == 1)
        printf("This array is a palindrome!");
    else
        printf("This array is NOT a palindrome!");
    return 0;
}