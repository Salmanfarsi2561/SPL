#include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') ch += 32;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c == ch) count++;
    }
    printf("Occurrences: %d\n", count);
    return 0;
}