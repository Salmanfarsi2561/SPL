#include <stdio.h>

int isUniquech(char *str) {
    int i;
    int val;
    int len=strlen(str);
    int char_set[256]={0};
    
    for(i=0;i<len;i++){
        val=(int)str[i];

        if(char_set[val]!=0){
            return 0;
        }
        else char_set[val]=1;
    }
    return 1;
}

void modifyString(char str[]) {
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            str[i] = c + 1;
        }
    }
}

int isLuckyNumber(int n) {
    if(n%2==0) return 0;

    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        return 1;
    }
    else return 0;
}

int main() {
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    if (isUniquech(name)) {
        modifyString(name);
        printf("Modified name: %s\n", name);
    } else {
        printf("Name is not unique.\n");
    }

    if (isLuckyNumber(age))
        printf("Lucky age!\n");
    else
        printf("Not a lucky age.\n");

    return 0;
}
