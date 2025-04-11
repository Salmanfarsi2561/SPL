#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    int n;
    int count=0;
    printf("Enter your input number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf(" %c",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(strchr("ABCDEFGH",arr[i])){
            count++;
        }

    }
    printf("Vowel count :%d",count);

}
