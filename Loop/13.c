#include <stdio.h>

int main() {
    int N;
    int factorial = 1;

    
    printf("Enter a number (N): ");
    scanf("%d", &N);

    
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }

        printf("%d! =",N);
        for (int i = 1; i <= N; i++) {
            printf(" %d", i);
            if (i < N) {
                printf(" X");
            }
        }
        printf(" = %d\n", factorial);
    }    
       

        
        

        
        
    

    return 0;
}