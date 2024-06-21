#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size = 5;

    // Allocate initial memory
    arr = (int *)malloc(initial_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize array
    for (int i = 0; i < initial_size; i++) {
        arr[i] = i + 1;
    }

    // Resize memory
    int new_size = 10;
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize new elements
    for (int i = initial_size; i < new_size; i++) {
        arr[i] = i + 1;
    }

    // Print array
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}