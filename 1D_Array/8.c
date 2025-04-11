#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);


    for(int i=0;i<n;i++){
        printf("Enter your input no %d :",i+1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int maxIndex = 0;
    int minIndex = 0;


    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("Maximum: %d at index %d\n", max, maxIndex);
    printf("Minimum: %d at index %d\n", min, minIndex);

    return 0;
}
