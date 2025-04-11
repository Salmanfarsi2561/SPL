#include <stdio.h>

int main() {
    int arr[100];
    int n, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Enter your input no %d :",i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];  // add each number to sum
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}

