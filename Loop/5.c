#include<stdio.h>


int main(){

    int x,y;

    printf("Enter two numbers x: ");
    scanf("%d", &x);
    printf("Enter two numbers y: ");
    scanf("%d", &y);

    while(x!=y){
        printf("%d",x*x);

        if(x<y){ x++; }
        else{ x--; }
        printf(", ");


    }
    printf("reached!");
    return 0;
}