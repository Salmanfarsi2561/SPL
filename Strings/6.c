int main(){
    char name[100];
    gets(name);

    for(int i=0; name[i] != '\0'; i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] = name[i] - 32;
        }

    }
    puts(name);
}
