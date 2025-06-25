#include<stdio.h>

void printchar(char c){

    printf("Your Character from Main is : %c\n",c);
    return c;
}

int main(){
    char c;
    printf("Enter a character :");
    scanf(" %c",&c);
    printchar(c);
    return 0;
}