#include<stdio.h>

int main(){
    int n,row,col;

    printf("Enter your number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=row;col<row+n;col++){
            printf("%d",col);
        }
        printf("\n");
    }


    return 0;
}
#include <stdio.h>


