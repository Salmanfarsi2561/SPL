#include <stdio.h>

int getSize(char str[]) {
    int size = 0;
    while (str[size] != '\0') {
        size++;
    }
    return size;
}

int removeAllDuplicates(char str[]) {
    int size = getSize(str);
    int i, j, k;


    for (i = 0; i < size; i++) {

        for (j = i + 1; j < size;j++) {
            if (str[i] == str[j]) {

                for (k = j; k < size; k++) {
                    str[k] = str[k + 1];
                }
                size--;
            }
        }
    }
}


void checkPalindrome(char *str) {
    int size = getSize(str);
    int i, j;
    int isPalindrome = 1;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string '%s' is a palindrome\n", str);
    } else {
        printf("The string '%s' is not a palindrome\n", str);
    }
}

int main() {
    char str[100];
    int i = 0;
    char c;


    printf("Enter a string: ");
    gets(str);


    printf("Original string: %s\n", str);


    removeAllDuplicates(str);
    printf("String after removing duplicates: %s\n", str);


    checkPalindrome(str);

    return 0;
}
