
#include <stdio.h>

#define MAX_SIZE 100


int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int all_primes(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (!is_prime(arr[i])) {
            return 0;
        }
    }
    return 1;
}


int sum_is_prime(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return is_prime(sum);
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


    if (all_primes(arr, size)) {
        printf("All elements in the array are prime numbers.\n");
    } else {
        printf("Not all elements in the array are prime numbers.\n");
    }


    if (sum_is_prime(arr, size)) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        printf("The sum of array elements (%d) is a prime number.\n", sum);
    } else {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        printf("The sum of array elements (%d) is not a prime number.\n", sum);
    }

    return 0;
}
