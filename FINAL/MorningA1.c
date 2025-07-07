#include<stdio.h>
#define max 100
#include<string.h>
int getSize(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

char removeAllDuplicates(char str[]){
    for(int i =0; str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[i+1]){
                for(int x=j;str[x]!='\0';x++){
                    str[x]=str[x+1];
                }
                j--;
            }
        }
    }
}

void checkPalindrome(char *str){
    int i,j,flag=0;
    int size = getSize(str);


    for(i=0,j=size-2;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag++;
            break;
        }
    }

    if(flag) printf("NO ");
    else printf("PAL");

}


int main(){
    char str[max];


    printf("Enter Your String : ");
    fgets(str,max,stdin);

    removeAllDuplicates(str);
    printf("Duplicate removed String is : %s",str);

    checkPalindrome(str);





}
