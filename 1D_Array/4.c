#include <stdio.h>

int main() {
    float arr[100];
    int n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    float average = sum / n;
    printf("Average is: %.2f\n", average);

    return 0;
}
