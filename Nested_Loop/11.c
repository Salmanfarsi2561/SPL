#include<stdio.h>

int main(){
    int n,row,col;

    printf("Enter your number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        //for dash--
        for(col=1;col<=n-row;col++){
            printf("_");

        }
        //for printing star*
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

