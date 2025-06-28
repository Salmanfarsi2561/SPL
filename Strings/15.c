#include <stdio.h>
#include <string.h>
int main() {
    char str[200], *words[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count = 0;
    char *token = strtok(str, " \n");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }
    printf("Reversed words: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}