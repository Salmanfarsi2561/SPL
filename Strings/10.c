#include<stdio.h>

int main(){

    char str1[100];
    char rev[100];

    printf("Enter Your string :");
    gets(str1);

    int i=0;
    int len=0;

    while(str1[len]!='\0'){

        len++;
    }

    for(int j=len-1;j>=0;j--){
        rev[i]=str1[j];
        i++;
    }

    rev[i]='\0';
    int k=0;
    int flag=0;
    while(rev[k]!='\0'){
        if(rev[k]!=str1[k]){
            flag++;
            break;
        }
        k++;
    }

    if(flag){
        printf("Not Magic");
    }
    else {printf("MAGIC");}

}
