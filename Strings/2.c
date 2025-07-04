#include<stdio.h>

int main(){

    char str1[100],str2[100];

    printf("Enter Your string 1: ");
    gets(str1);

    printf("Enter Your string 1: ");
    gets(str2);

    int i=0,j=0;

    while(str1[i]!='\0'){
        i++;
    }
    str1[i]=' ';
    i++;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

    printf("Your string is : %s",str1);
}
