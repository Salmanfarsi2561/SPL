#include <stdio.h>

#define MAX_SIZE 100


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int print_common_divisors(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty or invalid size.\n");
        return 0;
    }


    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result = gcd(result, arr[i]);
        if (result == 1) break;
    }


    printf("Common divisors of array elements: ");
    for (int i = 1; i <= result; i++) {
        if (result % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 1;
}


int isFamilyArray(int *arr, int size) {
    if (size <= 1) return 1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == 0 || arr[i + 1] % arr[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[MAX_SIZE];
    int size;


    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);


    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }


    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nInput array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    print_common_divisors(arr, size);


    if (isFamilyArray(arr, size)) {
        printf("The array is a Family Array.\n");
    } else {
        printf("The array is not a Family Array.\n");
    }

    return 0;
}
