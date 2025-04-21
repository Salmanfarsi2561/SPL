#include<stdio.h>


int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=1;
    for(int i = 1; i <= n; i++){
        
        if(i%2==0){
            printf("0");
        }
        else printf("1");
        
        if(i<n){
            printf(", ");
        }
        
        
    }
    printf("\n");
    return 0;
}