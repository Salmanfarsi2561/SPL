//int
//float
//char
//long
//double

//id -> int
//cgpa -> float
//name -> char[]
//
//structure -> a custom datatype composed of primitive data types

#include<stdio.h>
#include<string.h>
//struct Student{
//    int id;
//    float cgpa;
//    char name[100];
//};

//int main(){
////    int roll_no;
////    float result;
//
//    struct Student s1;
////    s1.id = 2;
////    s1.cgpa = 3.5;
////    strcpy(s1.name, "anis");
////
////    printf("%s", s1.name);
////    printf("%f", s1.cgpa);
//
////    scanf("%d", &s1.id);
//}

//struct Student{
//    int id;
//    float cgpa;
//    char name[100];
//};
//
//int main(){
////    int arr[2];
//    struct Student students[2];
//
//    //students[0]
//
//    for(int i=0; i<2; i++){
//        gets(students[i].name);
//        scanf("%d", &students[i].id);
//        scanf("%f", &students[i].cgpa);
//        getchar();
//    }
//
//    for(int i=0; i<2; i++){
//        puts(students[i].name);
//        printf("%d\n", students[i].id);
//        printf("%f\n", students[i].cgpa);
//    }
//
//
////    0th student id
////    0th student cgpa
////    0th student name
////
////    1th student id
////
////    2nd student id
//}


//struct Student{
//    int id;
//    float cgpa;
//    char name[100];
//};
//
//
//int takeInput(struct Student students[], int n){
//    for(int i=0; i<n; i++){
//        printf("Student %d Name: ", i+1);
//        gets(students[i].name);
//
//        printf("Student %d ID: ", i+1);
//        scanf("%d", &students[i].id);
//
//        printf("Student %d CGPA: ", i+1);
//        scanf("%f", &students[i].cgpa);
//        getchar();
//    }
//}


//int printAll(struct Student students[], int n){
//    for(int i=0; i<n; i++){
//        printf("Information of Student %d: \n", i+1);
//
//        printf("Name: ");
//        puts(students[i].name);
//
//        printf("ID: %d\n", students[i].id);
//
//        printf("CGPA: %.2f\n", students[i].cgpa);
//    }
//}

//int maxCGPA(struct Student students[], int n){
//    float max = students[0].cgpa;
//    int index = 0;
//
//    for(int i=0; i<3; i++){
//        if(max < students[i].cgpa){
//            max = students[i].cgpa;
//            index = i;
//        }
//    }
//
//    printf("\nThe maximum CGPA is: %.2f\n", max);
//}


//struct Student maxCGPA(struct Student students[], int n){
//    float max = students[0].cgpa;
//    int index = 0;
//
//    for(int i=0; i<3; i++){
//        if(max < students[i].cgpa){
//            max = students[i].cgpa;
//            index = i;
//        }
//    }
//
//    return students[index];     //max cgpa holder is students[index]
//}
//
//int main(){
//    struct Student students[3];
//    int n = 3;
//    takeInput(students, n);
//    printAll(students, n);
//    struct Student studentWithMaxCGPA = maxCGPA(students, n);
//
//    printf("\nThe Maximum CGPA: \n");
//    printf("Name: ");
//    puts(studentWithMaxCGPA.name);
//    printf("ID: %d\n", studentWithMaxCGPA.id);
//    printf("CGPA: %.2f\n", studentWithMaxCGPA.cgpa);
//}



struct Student{
    int id;
    float cgpa;
    char name[100];
    int marks[3];
};

int takeInput(struct Student students[]){
    for(int i=0; i<2; i++){                 //for student
        printf("Student %d Name: ", i+1);
        gets(students[i].name);

        printf("Student %d ID: ", i+1);
        scanf("%d", &students[i].id);

        printf("Student %d CGPA: ", i+1);
        scanf("%f", &students[i].cgpa);

        for(int j=0; j<3; j++){             //3 marks for each student
            printf("Student %d Marks %d: ", i+1, j+1);
            scanf("%d", &students[i].marks[j]);
        }
        getchar();
    }
}


int printAll(struct Student students[]){
    for(int i=0; i<2; i++){                 //for student
        printf("Student %d Name: ", i+1);
        puts(students[i].name);

        printf("Student %d ID: %d\n", i+1, students[i].id);

        printf("Student %d CGPA: %.2f\n", i+1, students[i].cgpa);

        for(int j=0; j<3; j++){             //3 marks for each student
            printf("Student %d Marks %d: %d\n", i+1, j+1, students[i].marks[j]);
        }
    }
}

int updateMarks(struct Student students[], int checkID, int subjectNo, int changeMarks){

    for(int i=0; i<2; i++){
        if(students[i].id == checkID){
            students[i].marks[subjectNo] = changeMarks;
        }
    }

    printf("Marks updated successfully!");

}

//checkID = 1
//subjectNo = 1112
//changeMarks = 20

int main(){
    struct Student students[2];
    takeInput(students);

    int checkID;            //change the marks of this student
    int subjectNo;          //of this subject
    int changeMarks;        //to this marks

    //scanf("%d%d%d", &checkID, &subjectNo, &changeMarks);
    printf("\n");
    printf("Enter ID: ");
    scanf("%d", &checkID);
    printf("Enter Subject: ");
    scanf("%d", &subjectNo);
    printf("Enter Marks: ");
    scanf("%d", &changeMarks);

    updateMarks(students, checkID, subjectNo, changeMarks);

    printf("\n");
    printAll(students);
}


