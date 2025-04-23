#include <stdio.h>

int main() {
    int N, sum = 0;

    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= i; // Subtract if the number is even
        } else {
            sum += i; // Add if the number is odd
        }
    }

    
    printf("The sum of the first %d terms of the series is: %d\n", N, sum);

    return 0;
}