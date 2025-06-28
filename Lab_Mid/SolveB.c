#include <stdio.h>

int main() {
    int n, min_Value,min_Index = 0;
    printf("Please Enter Size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The Initial array is as follows: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    
    min_Value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_Value) {
            min_Value = arr[i];
            min_Index = i;
        }
    }

    
    for (int i = min_Index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    
    printf("\nThe array after deletion as follows: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    
    printf("\nThe array after sorting is as follows: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    int insertPos = 0;
    while (insertPos < n && arr[insertPos] > min_Value) {
        insertPos++;
    }

    
    for (int i = n; i > insertPos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[insertPos] = min_Value;
    n++; // Restore original size

    
    printf("\nThe array after insertion is as follows: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
    
    
    
    
    
}