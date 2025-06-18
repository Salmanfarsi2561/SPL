#include<stdio.h>
#include<string.h>
//int main(){
//    char name[4];
//    name[0] = 'a';
//    name[1] = 'n';
//    name[2] = 'i';
//    name[3] = 's';
//
//    for(int i=0; i<4; i++){
//        printf("%c", name[i]);
//    }
//}

//%c
//int main(){
//    char name[100];
//
//    for(int i=0; i<4; i++){
//        scanf(" %c", &name[i]);
//        //getchar();
//    }
//
//    for(int i=0; i<4; i++){
//        printf("%c", name[i]);
//    }
//}

//%s        //no space
//int main(){
//    char name[100];
//    scanf("%4s", &name);
//    printf("%s", name);
//}

//fgets     //most optimal approach
//int main(){
//    char name[100];
//
//    fgets(name, 10, stdin);      //buffer size includes the \0
//    fputs(name, stdout);
//}

//gets
//int main(){
//    char name[100];
//    gets(name);
//    puts(name);     //auto newline added
//    printf("hello world");
//}


//1
//int main(){
//    char name[100];
//    gets(name);
//    int i = 0;
//
////    while(name[i] != '\0'){
////        i++;
////    }
//
//    for(i=0; name[i] != '\0'; i++){
//
//    }
//    printf("%d", i);
//}


//2
//int main(){
//    char str1[100];
//    char str2[100];
//    gets(str1);
//    gets(str2);
//
//    int i=0;
//    while(str1[i] != '\0'){
//        i++;
//    }
//
//    str1[i] = ' ';
//    i++;
//    int j=0;
//
//    while(str2[j] != '\0'){
//        str1[i] = str2[j];
//        i++;
//        j++;
//    }
//    str1[i] = '\0';
//
//    puts(str1);
//}


//4
//int main(){
//    char word[100];
//    gets(word);
//    int count = 0;
//    for(int i=0; word[i]!='\0'; i++){
//        if(word[i] == ' '){
//            count++;
//        }
//    }
//    printf("%d", count+1);
//}


//5
//int main(){
//    char word[100];
//    char rev[100];
//
//    gets(word);
//    int i;
//    for(i=0; word[i] != '\0'; i++){
//
//    }
//    int index = 0;
//    for(int j=i-1; j>=0; j--){
//        rev[index] = word[j];
//        index++;
//    }
//
//    puts(rev);
//
//    if(strcmp(word, rev) == 0){     //library functions not allowed
//        printf("palindrome");
//    }
//    else{
//        printf("not palindrome");
//    }
//}


//7
//int main(){
//    char name[100];
//    gets(name);
//
//    for(int i=0; name[i] != '\0'; i++){
//        if(name[i] >= 'a' && name[i] <= 'z'){
//            name[i] = name[i] - ('a' - 'A');
//        }
//        else if(name[i] >= 'A' && name[i] <= 'Z'){
//            name[i] = name[i] + 32;
//        }
//    }
//    puts(name);
//}


//8
//int main(){
//    char name[100];
//    gets(name);
//    puts(name);
//    char temp;
//    int count;
////    for(count=0; name[count] != '\0'; count++){
////
////    }
////
////    printf("%d\n", count);
//
//    for(int i=0; name[i]!='\0'; i++){
//        for(int j=0; name[j]!='\0'; j++){
//            if(name[i] > name[j]){
//                temp = name[i];
//                name[i] = name[j];
//                name[j] = temp;
//            }
//        }
//    }
//
//    puts(name);
//}


//10
//int main(){
//    char name[100];
//    char rev[100];
//
//    gets(name);
//
//    int i, index;
//
//    while(name[i] != '\0'){
//        i++;
//    }
//
//    index = 0;
//
//    for(int j=i-1; j>=0; j--){
//        rev[index] = name[j];
//        index++;
//    }
//
//    puts(name);
//    puts(rev);
//
////    if(strcmp(name, rev) == 0){
////        printf("palin");
////    }
//    int flag = 0;
//    for(int j=0; name[j] != '\0'; j++){
//        if(name[j] != rev[j]){
//            flag = 1;
//        }
//    }
//    if(flag == 0){
//        printf("palindrome");
//    }
//    else{
//        printf("not");
//    }
//}


//11
//int main(){
//    char name[100];
//    gets(name);
//    int sum = 0;
//
//    for(int i=0; name[i]!= '\0'; i++){
//        if(name[i] >= '0' && name[i] <= '9'){
//            sum = sum + (name[i] - '0');        //'0' -> 48
//        }
//    }
//
//    printf("%d", sum);
//}


//12    //substring problem
//int main(){
//    char sentence[100];
//    char word[100];
//    gets(sentence);
//    gets(word);
//    int j;
//    int i = 0;
//    int occ = 0;
//    int count = 0;
//    while(word[count] != '\0'){
//        count++;
//    }
//
//    for(int i=0; sentence[i] != '\0'; i++){
//        j = 0;
//        while(sentence[i+j] == word[j]){
//            j++;
//        }
//        if(j == count){
//            occ++;
//        }
//    }
//
//    printf("%d", occ);
//}


//13
//int main(){
//    char name[100];
//    gets(name);
//
//    for(int i=0; name[i] != '\0'; i++){
//        for(int j=i+1; name[j]!='\0'; j++){
//            if(name[i] == name[j]){
//                for(int x = j; name[x] !='\0'; x++){
//                    name[x] = name[x+1];
//                }
//                j--;        //to check the newly shifted char to the left
//            }
//        }
//    }
//    puts(name);
//}


//14
//int main(){
//    char name[100];
//    gets(name);
//
//
//    int count[1000] = {0};
//    for(int i=0; name[i]!='\0'; i++){
//        count[name[i]]++;
//    }
//
////    for(int i=0; name[i]!='\0'; i++){
////        printf("%c -> %d\n", name[i], count[name[i]]);
////    }
//
////    for(int i=0; i<1000; i++){
////        printf("%d ", count[i]);
////    }
//
//    int max = count[0];
//    int pos;
//    for(int i=0; i<1000; i++){
//        if(count[i] > max){
//            max = count[i];
//            pos = i;
//        }
//    }
//    printf("%c %d", pos, max);
//}


//15
//int main(){
//    char word[100];
//    gets(word);
//    int i;
//    for(i=0; word[i]!='\0'; i++){
//
//    }
//    while(i >= 0){
//
//        while(i>=0 && word[i]!= ' '){       //to go to the first letter of the last word
//            i--;
//        }
//        int j = i+1;                        //currently holds the first letter of the word
//        while(word[j]!= ' ' && word[j]!= '\0'){
//            printf("%c", word[j]);
//            j++;
//        }
//        if(i>=0){
//            printf(" ");
//        }
//        i--;
//    }
//}
