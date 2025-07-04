#include<stdio.h>

int vowels(char *str){
    int i=0,count=0;

    while(str[i]!='\0'){
        int ch=str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'){
            count++;
           }
        i++;
    }
    return count;

}



int main(){

    int str[100];
    int v_count;
    printf("Enter your string :");
    gets(str);

    v_count=vowels(str);

    printf("Your vowel count is :%d",v_count);

}
