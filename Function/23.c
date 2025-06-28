#include <stdio.h>

// Function to calculate the length of a string (without using strlen)
int str_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to find if b is a substring of a
int find_substr(char a[], char b[]) {
    int len_a = str_length(a);
    int len_b = str_length(b);

    // Ensure b is the smaller string
    char *big = a, *small = b;
    int len_big = len_a, len_small = len_b;
    if (len_b > len_a) {
        big = b;
        small = a;
        len_big = len_b;
        len_small = len_a;
    }

    for (int i = 0; i <= len_big - len_small; i++) {
        int j;
        for (j = 0; j < len_small; j++) {
            if (big[i + j] != small[j])
                break;
        }
        if (j == len_small)
            return 1; // Match found
    }
    return -1; // No match found
}

int main() {
    char a[100], b[100];
    printf("Enter string a: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter string b: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline characters if present
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') a[i] = '\0';
    }
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '\n') b[i] = '\0';
    }

    int result = find_substr(a, b);
    if (result == 1)
        printf("Substring found.\n");
    else
        printf("Substring not found.\n");

    return 0;
}