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



    //we have to use Bubble sorting algorithm
    //sort and swap


    //The outer loop will control the number of iteration
    //Inner loop will control the swapping operation
    //in inner loop we used n-1 because we can not compare last number with anything
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                //Ei khane Swapping algorithm use kora hoyeche
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
