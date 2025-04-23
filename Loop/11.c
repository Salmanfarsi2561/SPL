#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        sum += (i*i)* (i + 1); 
    }

    
    printf("The result of the series for the first %d terms is: %d\n", N, sum);

    return 0;
}