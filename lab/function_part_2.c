#include <stdio.h>
#include<string.h>
//20
//int isPrime(int num){
//    int i;
//    if (num < 2){
//        return 0;           //0 if not prime
//    }
//    for (i = 2; i < num; i++) {
//        if (num % i == 0){
//            return 0;       //0 if not prime
//        }
//    }
//    return 1;               //1 if prime
//}
//
//int nthPrime(int n) {
//    int count = 0;      //to keep track of upto n
//    int num = 1;        // is the actual prime no
//
//    while (count < n) {
//        num++;
//        if (isPrime(num) == 1) {
//            count++;
//        }
//    }
//
//    return num;
//}
//
//int main(){
//    int n;          //nth
//    scanf("%d", &n);
//    printf("%dth prime number is: %d\n", n, nthPrime(n));
//}

//function 22 similar to string problem 12
int checkSubStr(char sentence[], char word[]){
    int j;
    int i = 0;
//    int occ = 0;
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }

    for(int i=0; sentence[i] != '\0'; i++){
        j = 0;
        while(word[j] != '\0' && sentence[i+j] == word[j]){
            j++;
        }
        if(j == count){
//            occ++;
                return 1;
        }
    }

//    printf("%d", occ);
    return 0;
}

int main(){
    char sentence[100];
    char word[100];
    gets(sentence);
    gets(word);

    if(checkSubStr(sentence, word) == 1){
        printf("found");
    }
    else{
        printf("not found");
    }
}
