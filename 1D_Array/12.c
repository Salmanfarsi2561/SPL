//Take n numbers in an array.
//Take a new number and a position to insert it.
//Move the elements one step to the right from that position.
//Put the new number in the empty spot.
//Print the updated array.

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

    //Now i will take my new number and it's new position :
    int number,position;

    printf("Enter your number:");
    scanf("%d",&number);

    printf("Enter your position:");
    scanf("%d",&position);

    // In this block I will make space for my new number :
    for(int i=n;i>position;i--){
        arr[i]=arr[i-1];
    }

    // I am updating my number in this position and making the n one bigger
    arr[position]=number;
    n=n+1;


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}







