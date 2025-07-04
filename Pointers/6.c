#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // Note: unsafe in real code; use fgets instead.

    ptr = str;  // pointer to start of string

    while (*ptr != '\0') {
        // Check for letters only
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')) {
            // Convert to lowercase for simpler comparison
            char ch = *ptr | 32;  // make lowercase without changing original

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        ptr++;  // move pointer to next character
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
