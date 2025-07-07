#include<stdio.h>

# define max 100
# define sub 5 

struct student {
    char name[500];
    int id;
    int marks[sub];
    float avg;
};



int main() {
    struct student s[max];
    int n=0,choice;

    while(1){
        printf("\nStudent Performance Management System\n");
        printf("1. Add a New Student\n");
        printf("2. Display All Students\n");
        printf("3. Find Top Performer\n");
        printf("4. Find Failing Students\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if(choice==1){
            printf("Enter Students Name : ");
            scanf("%s",s[n].name);
            printf("ID: ");
            scanf("%d",&s[n].id);


            float sum=0;
            printf("Enter your marks : \n");
            for(int i=0;i<5;i++){
                printf("Marks %d :",i+1);
                scanf("%d",&s[n].marks[i]);
                sum+=s[n].marks[i];
            }
            s[n].avg=sum/5;
            n++;
        }
    }
}