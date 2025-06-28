#include <stdio.h>
#define ASCII_SIZE 256
int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0}, max = 0;
    char maxChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (str[i] != '\n' && freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    printf("Max occurring character: %c\n", maxChar);
    return 0;
}