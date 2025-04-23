#include <stdio.h>

int main() {
    int num, isPrime = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Check divisors from 2 to sqrt(num)
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                isPrime++; // If divisible, it's not prime
                
            }
        }
    }

    // Display the result
    if (isPrime==2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}