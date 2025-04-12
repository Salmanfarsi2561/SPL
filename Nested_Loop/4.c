#include<stdio.h>

int main(){
    int n,row,col;

    printf("Enter your number:");
    scanf("%d",&n);

    //for row
    for(row=1;row<=n;row++){
        //for printing dash
        for(col=1;col<=n-row;col++){
            printf("_");

        }
        //for printing digit
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }


    return 0;
}

