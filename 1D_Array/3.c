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

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    printf("Sum of even integers :%d",sum);

}
