#include <stdio.h>

// Function to find GCD
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int a, b;
    while (1) {
        printf("Enter two positive integers (or 0 0 to exit): ");
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0) {
            printf("Exiting...\n");
            break;
        }
        int gcd = findGCD(a, b);
        int lcm = findLCM(a, b);
        printf("GCD: %d, LCM: %d\n", gcd, lcm);
    }
    return 0;
}