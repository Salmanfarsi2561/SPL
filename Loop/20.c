#include <stdio.h>

int main() {
    int n, term = 0, sum = 0;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        term = term * 10 + i; // Generate the term
        sum += term;          // Add the term to the sum
    }

    
    printf("The sum of the series up to %d terms is: %d\n", n, sum);

    return 0;
}