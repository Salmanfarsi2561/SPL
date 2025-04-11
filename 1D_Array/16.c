#include <stdio.h>

int main() {
    int A[100];
    int n;
    printf("Enter your input number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&A[i]);
    }

    //Replacing numbers divisible by 2 with 0
    for(int i = 0; i < n; i++) {
        if(A[i] % 2 == 0) {
            A[i] = 0;
        }
    }


    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}



