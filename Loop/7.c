#include <stdio.h>

int main() {
    char inputs[100]; // Array to store inputs
    int index = 0;
    char ch,sum=0;
    int i;

    printf("Enter characters (type 'A' to stop):\n");

    for( i=0;;i++){
        printf("Enter Your input no %d:",i+1);
        scanf(" %c", &inputs[i]); // Store the character in the array
        

        if(inputs[i]== 'A') {
            break; // Stop if 'A' is entered
        }
    }

    
    printf("\nYou entered:\n");
    for (int j = 0; j < i; j++) {
        printf("Input %d: %c\n", j + 1, inputs[j]);
    }

    return 0;
}