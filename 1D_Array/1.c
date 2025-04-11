
#include <stdio.h>

int main() {
    int arr[100];
    int n;
    printf("Enter Your n:");
    scanf("%d",&n);

    //Taking the array input:
    for(int i=0;i<n;i++){
        printf("Enter your array element no %d:",i);
        scanf("%d",&arr[i]);
    }

    //Reversing the array:
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;

}
