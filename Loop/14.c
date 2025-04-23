#include <stdio.h>

int main() {
    int n, r;
    int nFact = 1, rFact = 1, nrFact = 1, nCr;

    
    printf("Enter n (n >= r): ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    // Check if n >= r
    if (n < r) {
        printf("Invalid input! n must be greater than or equal to r.\n");
        return 1;
    }

    // Calculate n!
    for (int i = 1; i <= n; i++) {
        nFact *= i;
    }

    // Calculate r!
    for (int i = 1; i <= r; i++) {
        rFact *= i;
    }

    // Calculate (n-r)!
    for (int i = 1; i <= (n - r); i++) {
        nrFact *= i;
    }

    // Calculate nCr = n! / (r! * (n-r)!)
    nCr = nFact / (rFact * nrFact);

    // Display the result
    printf("nCr = %d\n", nCr);

    return 0;
}