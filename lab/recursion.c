#include<stdio.h>
//recursion is a function calling itself
//must have a base case/base condition/stopping condition
//print n to 1

int printNto1(int n){
    if(n == 1){             //base case
        printf("%d ", n);
    }
    else{                   //recursive case
        printf("%d ", n);
        return printNto1(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);        //10
    printNto1(n);

//    for(int i=n; i>=1; i--){
//        printf("%d ", i);
//    }
}
