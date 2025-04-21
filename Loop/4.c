#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int a;
    int sum=0;
    for(int i = 1; i <= n; i++){
        printf("Enter number %d: ", i);
        scanf("%d",&a);
        sum+=a;
    }

    int avg = sum/n;
    printf("Average: %d\n", avg);
    printf("\n");
    return 0;
}