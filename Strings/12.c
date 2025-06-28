#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter word to search: ");
    scanf("%s", word);
    char *token = strtok(str, " \n");
    while (token != NULL) {
        if (strcmp(token, word) == 0)
            count++;
        token = strtok(NULL, " \n");
    }
    printf("Occurrences: %d\n", count);
    return 0;
}