#include <stdio.h>

// Function to check if a number is prime
int IsPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to compute the Nth prime number
int GenNthPrime(int N) {
    int count = 0;
    int num = 2;
    while (1) {
        if (IsPrime(num)) {
            count++;
            if (count == N)
                return num;
        }
        num++;
    }
}

int main() {
    int N;
    printf("Enter which prime number you want (N): ");
    scanf("%d", &N);
    int nthPrime = GenNthPrime(N);
    printf("The %dth prime number is: %d\n", N, nthPrime);
    return 0;

} 