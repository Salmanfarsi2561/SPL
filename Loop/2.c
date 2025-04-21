#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=1;
    for(int i = 1; i <= n; i++){
        printf("%d ", a);
        
        if(i<n){
            printf(", ");
        }
        
        a+=2;
    }
    printf("\n");
    return 0;
}