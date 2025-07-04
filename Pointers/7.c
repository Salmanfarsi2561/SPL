#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    int *ptr;

    printf("Enter number of elements (up to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input (can use pointer too if needed)
    }

    ptr = arr;  // point to start of the array

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);  // access elements using pointer arithmetic
    }

    printf("Sum of array elements is: %d\n", sum);

    return 0;
}
