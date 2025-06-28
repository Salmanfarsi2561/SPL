#include <stdio.h>
int main() {
    char str[100], res[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (str[i] == res[j]) {
                found = 1;
                break;
            }
        }
        if (!found && str[i] != '\n') {
            res[k++] = str[i];
        }
    }
    res[k] = '\0';
    printf("String without repeats: %s\n", res);
    return 0;
}