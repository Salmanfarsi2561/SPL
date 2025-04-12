#include<stdio.h>

int main(){
    int n,row,col;

    printf("Enter your number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){

        for(col=1;col<=n;col++){
            if(col%2==0){
                printf("0");
            }
            else printf("1");

        }
        printf("\n");
    }


    return 0;
}

