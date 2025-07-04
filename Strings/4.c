#include<stdio.h>

int word_cf(char *str){
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    return count;
}


int main(){


    char word[100];


    printf("Enter Your sentence :");
    gets(word);

    int word_count = word_cf(word);

    printf("Word count is :%d",word_count+1);




}
