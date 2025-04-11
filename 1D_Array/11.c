#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("Enter your input number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("array A :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nArray B :");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);

    }

    return 0;
}
