#include <stdio.h>
#include<stdbool.h>



int main() {

    int n,row,col;

    while(1){
        printf("Enter your n (n>=5) :");
        scanf("%d",&n);

        if(n>=5) {break;}

    }


    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            //Upper middle and lower part
            if(row==1||row==n||row==(n/2 +1)){
                printf("*");
            }
            //right corner
            else if(row<(n/2 +1)&&col==n){
                printf("*");
            }
            //down left part
            else if(row>(n/2 + 1)&&col==1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }




    return 0;
}
