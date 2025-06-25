#include<stdio.h>
//int main(){
//    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//
////    for(int i=0; i<3; i++){
////        for(int j=0; j<2; j++){
////            printf("row %d col %d: ", i, j);
////            scanf("%d", &arr[i][j]);
////        }
////    }
//
//    for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}


//int main(){
//    int marks[3][4];
//
//    for(int i=0; i<3; i++){
//        for(int j=0;j<4; j++){
//            printf("Enter marks for Student %d Course %d: ", i+1, j+1);
//            scanf("%d", &marks[i][j]);
//        }
//    }
//
//    for(int i=0; i<3; i++){
//        for(int j=0; j<4; j++){
//            printf("%d ", marks[i][j]);
//        }
//        printf("\n");
//    }
//}


//int main(){
//    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//    int n = 3;
//
//    for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
////            if(i==j){                       //major diagonal
////                printf("%d ", arr[i][j]);
////            }
////
////            if(j == n-i-1){                 //minor diagonal
////                printf("%d", arr[i][j]);
////            }
//
////            if(i==1 && j==1){
////                printf("%d ", arr[i][j]);
////            }
//
////            if(i==1){
////                printf("%d ", arr[i][j]);
////            }
//
////            if(j==1){
////                printf("%d ", arr[i][j]);
////            }
//        }
//    }
//
//}


//14
//#include <stdio.h>
//int main() {
//    int arr[10][10];
//    int i, j, m, n;
//    int row = 2;
//    int col = 2;
//
//    for (i = 0; i < row; i++) {
//        for (j = 0; j < col; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < row; i++) {
//        for (j = 0; j < col; j++) {
//            for (m = 0; m < row; m++) {
//                for (n = 0; n < col; n++) {                                                    //need 2 loops [i,j] to select a variable, another 2 loops [m,n] to compare an element with the selected element
//                    if ((i != m || j != n) && arr[i][j] == arr[m][n] && arr[m][n] != -1) {     //i and m, j and n can't be the same element; the elements must match to be regarded as duplicate; the value must not already be -1
//                        arr[m][n] = -1;
//                    }
//                }
//            }
//        }
//    }
//
//    printf("\n");
//    for (i = 0; i < row; i++) {
//        for (j = 0; j < col; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}



//13 scroll down for explanation
int main(){
    int flag = 1;
    int arr[3][3];
    int transpose[3][3];                        //transpose means to swap the rows with columns

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[i][j] = arr[j][i];        //row (i) and col (j) are being swapped
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] != transpose[i][j]){   //checking if after changing the row with col, if both the arrays are the same or not
                flag = 0;
            }
        }
    }

    if(flag == 1){
        printf("symmetric");
    }
    else{
        printf("not symmetric");
    }
}

/*
Assume that the given matrix is as follows

1 2 3
4 5 6
7 8 9

The first row is 1 2 3, and the first column is 1 4 7.
In order to transpose, the rows become the columns, and the columns become the rows.
For example, the first row becomes the first column, and the first column becomes the first row and so on.

Now, if the rows and columns are swapped, we get the following transpose matrix

1 4 7   (first col 1 4 7 became first row)
2 5 8   (second col 2 5 8 became second row)
3 6 9   (third col 3 6 9 became third row)

Now, for a matrix to be symmetric, the actual matrix and the transposed matrix must be the same.

1 2 3       1 4 7
4 5 6  and  2 5 8  are not equal, so they are not symmetric.
7 8 9       3 6 9


But in case of the matrix

1 7 3
7 4 5
3 5 6

After transpose, we get

1 7 3   (first col 1 7 3 became first row)
7 4 5   (second col 7 4 5 became second row)
3 5 6   (third col 3 6 5 became third row)

which is equal to the actual matrix. So, the matrix is symmetric.
*/
