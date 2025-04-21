#include<stdio.h>

int main(){

    int p1_num,guess,p2_guess;
    int flag=0;

    printf(" Player 1 Enter a number : ");
    scanf("%d", &p1_num);
    printf("Number of guesses : ");
    scanf("%d", &guess);

    for(int i=1;i<=guess;i++){
        printf("Player 2 Enter your guess : ");
        scanf("%d", &p2_guess);

        if(p1_num==p2_guess){
            printf("Player 2 guessed the number in %d tries\n", i);
            flag=1;
            break;
        }
        else if(p1_num>p2_guess){
            printf("Player 2 guess is too low\n");
            printf("No of tries left : %d\n", guess-i);
        }
        else{
            printf("Player 2 guess is too high\n");
            printf("No of tries left : %d\n", guess-i);
        }
    }
    if(flag==0){
        printf("Player 1 won the game:\n");
    }
}