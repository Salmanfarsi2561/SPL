

#include<stdio.h>


int add(int n){
    int sum=0,num;
    
    for(int i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        sum +=num;

    }
    return sum;

}

int main(){
    int n;
    printf("Enter how many numbers you want to add:");
    scanf("%d",&n);

    int result = add(n);
    printf("Sum of %d number is : %d",n,result);
    return 0;

}