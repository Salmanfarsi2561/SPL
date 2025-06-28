#include <stdio.h>

// Function to find if b is a substring of a
int find_substr(char a[], char b[]) {
    int i, j;
    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; b[j] != '\0'; j++) {
            if (a[i + j] != b[j])
                break;
        }
        if (b[j] == '\0')
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