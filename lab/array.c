#include<stdio.h>
//int main(){
////    int salary[10];
////    salary[0] = 10;
////    salary[1] = 20;
////    salary[9] = 100;
//
//    //printf("%d", salary[10]);
//    //printf("%d", salary[9]);
//
////    scanf("%d", &salary[2]);
////    printf("%d", salary[2]);
//
////    for(int i = 0; i<5; i++){
////        scanf("%d", &salary[i]);
////    }
////
////    for(int i = 0; i<5; i++){
////        printf("%d ", salary[i]);
////    }
//
//     //int salary[10] = {1,2,3,4};
//
//     //int salary[] = {1,2,3,4};
//}


//2
//int main(){
//    int arr[100];
//    int size;
//    scanf("%d", &size);
//    int sum = 0;
//
//    for(int i = 0; i<=size-1; i++){
//        scanf("%d", &arr[i]);
//        sum = sum + arr[i];
//    }
//
//    printf("%d ", sum);
//}


//6
//int main(){
//    int a[] = {1,2,3,4,5};
//    int b[] = {10,11,12,13,14};
//    int size = 5;
//    int c[size];
//
//    for(int i = 0; i<=size-1; i++){
//        c[i] = a[i] + b[i];
//    }
//
//    for(int i=0; i<size; i++){
//        printf("%d ", c[i]);
//    }
//
//}


//7
//int main(){
//    int arr[] = {1,2,3,4,5};
//    int size = 5;
//    int rev[size];
//    int index = size-1;
//
//    for(int i = 0; i<size; i++){
//        rev[index] = arr[i];
//        index--;
//    }
//
//    for(int i=0; i<size; i++){
//        printf("%d ", rev[i]);
//    }
//}


//8
//int main(){
//    int arr[] = {12, 100, 56, 1, 23};
//    int size = 5;
//    int pos;
//    int max = arr[0];
//
//    for(int i=0; i<size; i++){
//        if(max < arr[i]){
//            max = arr[i];
//            pos = i;
//        }
//    }
//
//    printf("%d %d", max, pos);
//}


//10
//if(arr[i] == value){
//    printf("found");
//}


//nested loop
//int main(){
//    for(int i = 1; i<=5; i++){
//        for(int j =1; j<=5; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//}


//12
//int main(){
//    int arr[100] = {1,2,3,4,5};
//    int size = 5;
//    int insert = 100;
//    int index = 2;
//
//    for(int i = size-1; i>=index; i--){
//        arr[i+1] = arr[i];
//    }
//
//    arr[index] = insert;
//    size++;
//
//    for(int i=0; i<size; i++){
//        printf("%d ", arr[i]);
//    }
//
//
//}


//13
//int main(){
//    int arr[100] = {1,2,3,4,5};
//    int size = 5;
//    int index = 2;
//
//    for(int i = index; i<size; i++){
//        arr[i] = arr[i+1];
//    }
//
//    size--;
//
//    for(int i=0; i<size; i++){
//        printf("%d ", arr[i]);
//    }
//
//}


//17
int main(){
    int arr[] = {12, 100, 17, 16, 2};
    int size = 5;
    int temp;

    for(int i = 0; i<size; i++){        //outer loop for selecting one element
        for(int j = 0; j<size; j++){    //inner loop for comparing the selected element with all other elements
            if(arr[i] < arr[j]){        //swap > < for ascending or descending order sort
                temp = arr[i];          //original value of arr[i] is kept in temp
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
