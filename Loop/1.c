#include<stdio.h>

int main(){
    int n;
    printf("Enter A number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d",i);
        if(i<n){
            printf(",");
        }

    }
}