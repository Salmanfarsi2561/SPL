#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        int rem = num % 10;         
        reversed = reversed * 10 + rem; 
        num /= 10;                   
    }

    
    if (originalNum == reversed) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}