#include<stdio.h>

void sortin_function();
int main(){

    int arr[100];
    int n;
    printf("Enter your input number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&arr[i]);
    }


    sortin_function(arr,n);


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}

void sortin_function(int arr[],int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}


