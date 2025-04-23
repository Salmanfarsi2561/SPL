#include <stdio.h>

int main() {
    int num, reversed = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    while (num != 0) {
        int rem = num % 10; // Get last digit
        reversed = reversed * 10 + rem; // Append it to reversed
        num /= 10; // Remove last digit from num               
    }

    
    printf("Reversed number: %d\n", reversed);

    return 0;
}