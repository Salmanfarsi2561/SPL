#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        // if current char is not space and
        // next char is space or end of string, it's end of a word
        if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&
            (str[i + 1] == ' ' || str[i + 1] == '\0' ||
             str[i + 1] == '\t' || str[i + 1] == '\n'))
            words++;
        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
