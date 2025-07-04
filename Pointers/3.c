#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // point to the first element of arr

    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // no indexing, just pointer arithmetic
    }

    printf("\n");
    return 0;
}
