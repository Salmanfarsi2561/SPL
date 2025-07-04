#include<stdio.h>

int main(){

    char str1[100];
    char ch;
    printf("Enter Your String: ");
    gets(str1);

    printf("Enter Case to find : ");
    scanf(" %c",&ch);


    if(ch>='A'&& ch<='Z'){
        ch+=32;
    }

    int i=0;
    int count=0;
    while(str1[i]!='\0'){
        char c=str1[i];
        if(c>='A'&&c<='Z'){c+=32;}
        if(c==ch){count ++;}
        i++;
    }

    printf("Case Count :%d",count);

}
