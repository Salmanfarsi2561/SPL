#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0';
    len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}