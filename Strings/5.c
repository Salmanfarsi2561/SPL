#include<stdio.h>

int *reverse(char *str, char *rev_word){
    int i;
    for(i =0; str[i]!='\0';i++){
        //Just advancing the I
    }
    int index=0;
    for(int j=i-1;j>=0;j--){
        rev_word[index]=str[j];
        index++;
    }
    rev_word[index]='\0';

    return rev_word;


}


int main(){

    char word[100],rev_word[100];

    printf("Enter your word: ");
    gets(word);

    char *revs=reverse(word,rev_word);

    printf("%s",revs);



}

