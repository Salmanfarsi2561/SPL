#include<stdio.h>

int main(){

    char str[100];
    printf("Enter your string :");
    gets(str);

    int i=0,sum=0;
    while(str[i]!='\0'){
        char num = str[i];
        if(num>='0'&& num<='9'){
            sum=sum+(num-48);
        }

        i++;
    }
    printf("Sum is :%d ",sum);

}
