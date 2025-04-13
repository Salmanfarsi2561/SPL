#include <stdio.h>

int main() {
    int row,col,gaps,n;
    printf("Enter your n:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){

        for(col=1;col<=n;col++){
            if(row==col&&row<=(n/2+1)){
                printf("*");
            }
            else if(row+col==n+1&&row<=(n/2+1)){
                printf("*");
            }
            else if(col==(n/2)+1&&row>(n/2 +1)){
                printf("*");
            }

            else printf(" ");
        }
        printf("\n");


}
}
