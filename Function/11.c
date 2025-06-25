#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        length++;
        i++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = stringLength(str);
    printf("Length of the string: %d\n", len);
    return 0;

}