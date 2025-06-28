#include <stdio.h>

int IsPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void GeneratePrime(int N) {
    printf("Prime numbers less than %d are: ", N);
    for (int i = 2; i < N; i++) {
        if (IsPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    GeneratePrime(N);
    return 0;

}