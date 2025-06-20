#include<stdio.h>
//int main(){
//    int start = 1;
//    while(start < 11){
//        printf("hello world\n");
//        start++;
//    }
//}


//int main(){
//    int start;
//    for(start = 1;start <11;start++){
//        printf("%d ", start);
//    }
//}


//int main(){
//    int start = 1;
//    do{
//        printf("hello world");
//
//    }while(start > 10);
//}


//int main(){
//    int x = 10;
//    int i = ++x;      //pre increment
//    //int i = x++;        //post increment
//    printf("%d ", i);
//
//}


//1
//int main(){
//    //while
////    int i = 1;
////    int n;
////    scanf("%d", &n);
////    while(i<=n){
////        printf("%d ", i);
////        i++;
////    }
//
//    //for
//    //int i;
//    int n;
//    scanf("%d", &n);
//    for(int i=1; i<=n; i++){
//        printf("%d ", i);
//    }
//}

//3
//int main(){
//    int n;
//    scanf("%d", &n);
//
//    for(int i=1; i<=n; i++){
//        if(i%2 == 0){     //even
//            printf("0 ");
//        }
//        else{       //odd
//            printf("1 ");
//        }
//    }
//}


//4
//int main(){
//    int no_of_inputs;
//    float value;
//    float sum = 0;
//    scanf("%d", &no_of_inputs);
//
//    for(int i = 1; i<=no_of_inputs; i++){
//        scanf("%f", &value);
//        sum = sum + value;
//    }
//    //printf("\n%f", sum);
//    float avg = sum/no_of_inputs
//    printf("%f", avg);
//}


//6
int main(){
    int no_to_guess;
    int no_of_tries;
    int guess;
    int flag = 0;
    scanf("%d%d", &no_to_guess, &no_of_tries);

    for(int i=1; i<=no_of_tries; i++){
        scanf("%d", &guess);
        if(guess == no_to_guess){
            printf("player 2 wins!\n");
            flag = 1;
            break;
        }
        else{
            printf("wrong! %d tries left\n", no_of_tries - i);
        }
    }
    if(flag == 0){
        printf("player 1 wins!");
    }
}



