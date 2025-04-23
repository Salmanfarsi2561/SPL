#include <stdio.h>

int main() {
    int a, b, gcd, lcm, tempA, tempB;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Store the original values of a and b
    tempA = a;
    tempB = b;

    // Calculate GCD 
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;

    // Calculate LCM using the formula: LCM = (tempA * tempB) / GCD
    lcm = (tempA * tempB) / gcd;

    // Display the results
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}