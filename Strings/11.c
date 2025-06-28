#include <stdio.h>
int main() {
    char str[100];
    int sum = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            sum += str[i] - '0';
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}