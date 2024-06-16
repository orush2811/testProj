#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int DynamicArray(int *ptr)
{

    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("There was an error while trying to allocate the memory");
        exit(EXIT_FAILURE);
    }
    printf("Memory allocation successful\n");
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
        printf("Arr in position %d is %d", i, ptr[i]);
        printf("\n");
    }

    return *ptr;
    free(ptr);
}

int main()
{
    int arr[5];
    int x = DynamicArray(arr);
    return 0;
}