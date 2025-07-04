#include <stdio.h>

int main() {
    char sentence[100];
    char word[100];

    printf("Enter the sentence: ");
    gets(sentence);

    printf("Enter the word to search: ");
    gets(word);

    int word_len = 0;
    while (word[word_len] != '\0') {
        word_len++;
    }

    int occ = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        int j = 0;
        while (sentence[i+j] == word[j] && word[j] != '\0') {
            j++;


        }
        if (j == word_len) {
            occ++;
        }
    }

    printf("Occurrences: %d\n", occ);

    return 0;
}

