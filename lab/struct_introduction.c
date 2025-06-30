#include<stdio.h>

struct Student{     //similar to class in oop
    char name[100];
    int id;
    float cgpa;
};

int main(){
    struct Student st1;
    st1.cgpa = 3.4;
    st1.id = 1;
}
