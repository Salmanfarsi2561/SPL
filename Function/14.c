#include <stdio.h>

void printEvenNumbers(int arr[], int n) {
    printf("Even numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("How many numbers do you want to input? ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printEvenNumbers(arr, n);
    return 0;
}