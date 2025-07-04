#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your string: ");
    gets(name);  // unsafe, use fgets in real-world code

    for (int i = 0; name[i] != '\0'; i++) {
        for (int j = i + 1; name[j] != '\0'; j++) {
            if (name[i] == name[j]) {
                // Shift left to remove duplicate
                for (int k = j; name[k] != '\0'; k++) {
                    name[k] = name[k + 1];
                }
                j--;  // check the new char that replaced name[j]
            }
        }
    }

    printf("String after removing duplicates: %s\n", name);
    return 0;
}

