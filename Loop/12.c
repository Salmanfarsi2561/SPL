#include <stdio.h>

int main() {
    int N;

    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    int first = 0, second = 1;

    
    printf("Fibonacci series up to %d terms:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", first); 
        int next = first + second; 
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}