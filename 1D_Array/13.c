#include <stdio.h>

int main() {
    int arr[100];
    int n;
    printf("Enter your input number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&arr[i]);
    }

    //Taking position to delete
    int position;
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &position);

    //Shift elements to left from that position
    //reduce size after deletion
    for(int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    //Printing new array
    printf("New array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

