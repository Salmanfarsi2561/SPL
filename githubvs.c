#include<stdio.h>

int main(){
    printf("Hello this is my first code enter a number :");
    int i;
    scanf("%d",&i);


    for(int row=1;row<=i;row++){
        for(int col=1;col<=i;col++){
            printf("*");
        }
        printf("\n");
    }

}