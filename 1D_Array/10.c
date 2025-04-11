#include <stdio.h>

int main() {
    int arr[100];
    int n, search, found = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);


    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if(found==0) {
        printf("NOT FOUND\n");
    }

    return 0;
}

