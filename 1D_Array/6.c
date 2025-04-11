#include <stdio.h>

int main() {
    int arr1[100], arr2[100], sum[100];
    int n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);


    //Input for first array
    for(int i = 0; i < n; i++) {
        printf("1st array input no %d :",i+1);
        scanf("%d", &arr1[i]);
    }


    //input for second array
    for(int i = 0; i < n; i++) {
        printf("2nd array input no %d :",i+1);
        scanf("%d", &arr2[i]);
    }

    //sum of two arrays
    for(int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }


    printf("Sum:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

