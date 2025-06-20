#include<stdio.h>
//1
//int main(){
//    int n;
//    scanf("%d", &n);
//
//
//    for(int i=1; i<=n; i++){        //outer loop    //row
//        for(int j=1; j<=n; j++){    //inner loop    //column
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//}

//4
//int main(){
//    int n = 4;
//    for(int i=1; i<=n; i++){
//
//        for(int j=1; j<=n-i;j++){
//            printf("_");
//        }
//
//        for(int j=1; j<=i; j++){
//            printf("%d", i);
//        }
//
//        printf("\n");
//    }
//}

//9
//int main(){
//    int n = 5;
//    for(int row=1; row<=n; row++){
//        for(int col=1; col<=n; col++){
//            if(row % 2 == 0){
//                if(col %2 == 0){
//                    printf("1");
//                }
//                else{
//                    printf("0");
//                }
//            }
//            else{
//                if(col % 2 == 0){
//                    printf("0");
//                }
//                else{
//                    printf("1");
//                }
//            }
//        }
//
//        printf("\n");
//    }
//}


//11
//int main(){
//    int n = 5;
//    int count = 1;
//    for(int i = 1; i<=n; i++){
//        for(int j=1; j<=n-i; j++){
//            printf("_");
//        }
//
//        for(int j=1; j<=count; j++){
//            printf("*");
//        }
//        count = count + 2;
//
//        printf("\n");
//    }
//}



//12
//int main(){
//    int n=9;                                    //will work only for odd size
//    int count = 1;
//    int half;
//    int other_half;
//    half = (n/2) + 1;
//    other_half = n-half;
//
//    for(int i=1; i<=half; i++){                 //loop for pyramid
//        for(int j=1; j<=half-i; j++){
//            printf("_");
//        }
//        for(int j=1; j<=count; j++){
//            printf("*");
//        }
//        count=count+2;
//        printf("\n");
//    }
//
//    int count_bottom = n-2;                     //first level of reverse pyramid starts with n-2 stars
//    for(int i=1; i<=other_half; i++){           //loop for reverse pyramid
//        for(int j=1; j<=i; j++){
//            printf("_");
//        }
//        for(int j=1; j<=count_bottom; j++){
//            printf("*");
//        }
//        count_bottom=count_bottom-2;
//
//        printf("\n");
//    }
//}


//13
//int main(){
//    int n = 5;
//    for(int i=1; i<=n; i++){
//        for(int j = 1; j<=i; j++){
//            printf("%d", j);
//        }
//
////        for(int j=1; j<=n-i; j++){
////            printf("_");
////        }
////
////        for(int j=1; j<n-i; j++){
////            printf("_");
////        }
//
//        for(int j=1; j<2*(n-i); j++){
//            printf("_");
//        }
//        if(i==n){       //last row
//            for(int j=i-1; j>=1; j--){
//                printf("%d", j);
//            }
//        }
//        else{
//            for(int j=i; j>=1; j--){
//                printf("%d", j);
//            }
//        }
//
//
//        printf("\n");
//
//    }
//}


//quadrant related problem
//int main(){
//    int size=6;
//    int half = size/2;                      //half divides the matrix in 2 parts
//
//    for(int i=1; i<=size; i++){             //i is row
//        for(int j=1; j<=size; j++){         //j is col
////            if(i<=half && j>=half){         //row is less than half (above half), col is greater than half (right side of half)
////                printf("0");
////            }
//
//            if(i>=half && j<=half){         //row is greater than half (below half), col is less than half (left side of half)
//                printf("0");
//            }
//
//            else{
//                printf("1");
//            }
//        }
//        printf("\n");
//    }
//}

//center row and col
int main(){
    int n=6;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==n/2 || j==n/2){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}
