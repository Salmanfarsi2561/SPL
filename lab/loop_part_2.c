#include<stdio.h>
//infinite loop
//int main(){
//    int opt;
//    while(1){       //1 is true in binary
//       printf("1. Add\n");
//       printf("2. Sub\n");
//       printf("3. Mul\n");
//       printf("4. Div\n");
//       printf("5. Exit\n");
//       scanf("%d", &opt);
//
//       if(opt == 1){
//            //add
//       }
//       else if(opt == 2){
//            //sub
//       }
//       else if(opt == 5){
//            break;
//       }
//    }
//
//}

//8 + 18
//int main(){
//    int n;
//    scanf("%d", &n);
//    int last_digit;
//    int rev = 0;
//    int backup = n;                         //backup retains the original value of n
//
//    while(n>0){
//        last_digit = n%10;
//        rev = rev * 10 + last_digit;
//        n = n/10;                           //as the value of n no longer stays the same, rather gets divided in each step
//    }                                       //a backup for n is kept in order to check for palindrome
//    printf("\n%d \n", rev);
//    if(backup == rev){
//        printf("palindrome");               //a number is a palindrome when its actual and reversed value are the same
//    }                                       //for example, 1221, when reversed is also 1221, making it a palindrome
//    else{
//        printf("not");
//    }
//}


//12
//int main(){
//    int n;
//    scanf("%d", &n);
//    int first = 1, second = 1, next;
//
//    for(int i = 1; i<=n; i++){
//        if(i==1){
//            printf("%d ", first);
//            //printf("1 ")
//        }
//        else if(i == 2){
//            printf("%d ", second);
//            //printf("1 ");
//        }
//        else{
//            next = first + second;
//            printf("%d ", next);
//            first = second;
//            second = next;
//        }
//    }
//}


//2
//int main(){
//    int n;
//    scanf("%d", &n);
//    int count = 1;
//    for(int i = 1; i<=n; i=i+1){
//        if(i == n){
//            printf("%d ", count);
//        }
//        else{
//            printf("%d, ", count);
//        }
//        count = count + 2;
//    }
//}


//13
//int main(){
//    int n;
//    int fact = 1;
//    scanf("%d", &n);
////    int i = n;
////    while(i>=1){
////        fact = fact * i;
////
////        i--;
////
////    }
//    int i = 1;
//    while(i<=n){
//        fact = fact * i;
//        i++;
//    }
//    printf("%d", fact);
//
//
//}


//17
//int main(){
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//
//    if(n < 2){
//        printf("not prime\n");
//        return 0;
//    }
//    for(int i = 1; i<=n; i++){
//        if(n%i==0){
//            count++;
//        }
//    }
//
//    if(count == 2){
//        printf("prime");
//    }
//    else{
//        printf("not");
//    }
//}


//GCD
int main(){
    int x, y, small, gcd;
    scanf("%d%d", &x, &y);
    if(x>y){                        //gcd can only be the smaller of the 2 numbers
        small = y;                  //for example, between 6 and 18, gcd can never be 18
    }                               //as no divisor of 6 will be greater than 6 itself
    else{                           //hence, first the smaller number is identified
        small = x;
    }
    for(int i=1; i<=small; i++)
    {
        if(x%i == 0 && y%i == 0){   //both input numbers must be divisible by the gcd value, as it must be a common divisor
            gcd = i;                //since this is written inside a loop,
        }                           //the gcd value will keep getting updated, finally stopping at the greatest/largest value
    }

    printf("%d", gcd);
}
