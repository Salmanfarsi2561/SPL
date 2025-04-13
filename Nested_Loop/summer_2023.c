
#include <stdio.h>

int main() {

    int n,row,star,space;

    printf("Enter a number :");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        //for space
        for(space=1;space<=n-row;space++){
            printf(" ");
        }
        //for star
        for(star=1;star<=5;star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
