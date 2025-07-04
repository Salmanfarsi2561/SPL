
#include<stdio.h>


int main(){

    char word[100];
    printf("Enter Your word :");
    gets(word);
    int i =0,count=0;
    while(word[i]!='\0'){
        count++;
        i++;
    }

    for(int i=0;word[i]!='\0';i++){
        for(int j=0;j<count-1;j++){
            if(word[j]>word[j+1]){
                char temp = word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }

    printf("%s",word);



}
