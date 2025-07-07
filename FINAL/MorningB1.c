#include <stdio.h>

// Function to check if all characters in the string are unique using pointers
int hasUniqueCharacters(char *str) {
    char *i, *j;
    for (i = str; *i != '\0'; i++) {
        for (j = i + 1; *j != '\0'; j++) {
            if (*i == *j) {
                return 0; // Duplicate found
            }
        }
    }
    return 1; // All characters are unique
}

// Function to check if a character is a vowel
int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

// Function to get the next consonant
char getNextConsonant(char c) {
    char next = c + 1;
    while (isVowel(next)) {
        next++;
        if (next > 'z' && c >= 'a' && c <= 'z') return 'b'; // Wrap around for lowercase
        if (next > 'Z' && c >= 'A' && c <= 'Z') return 'B'; // Wrap around for uppercase
    }
    return next;
}

// Function to modify string by replacing vowels with next consonant
void modifyString(char str[]) {
    int i, j;
    // Process each character
    for (i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = getNextConsonant(str[i]);
        }
    }
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is lucky (prime and odd)
int isLuckyNumber(int num) {
    return (isPrime(num) && (num % 2 == 1));
}

int main() {
    char name[100];
    int age;
    char c;
    int i = 0;

    // Input name
    printf("Enter name: ");
    while ((c = getchar()) != '\n' && i < 99) {
        name[i] = c;
        i++;
    }
    name[i] = '\0'; // Null terminate the string

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Check for unique characters
    if (hasUniqueCharacters(name)) {
        printf("The name '%s' has all unique characters.\n", name);
        // Modify string if unique
        modifyString(name);
        printf("Modified name (vowels replaced with next consonant): %s\n", name);
    } else {
        printf("The name '%s' does not have all unique characters.\n", name);
    }

    // Check if age is a lucky number
    if (isLuckyNumber(age)) {
        printf("The age %d is a lucky number (prime and odd).\n", age);
    } else {
        printf("The age %d is not a lucky number.\n", age);
    }

    return 0;
}
