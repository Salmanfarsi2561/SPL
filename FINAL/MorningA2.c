#include <stdio.h>
#define MAX 100

struct Student {
    char name[50];
    int id;
    int marks[5];
    float avg;
};

int main() {
    struct Student s[MAX];
    int n = 0, choice;

    while (1) {
        printf("\n1.Add  2.Display  3.Top Performer  4.Failing Students  5.Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Name: ");
            scanf(" %[^\n]", s[n].name);
            printf("ID: ");
            scanf("%d", &s[n].id);
            int sum = 0;
            printf("Enter 5 marks:\n");
            for (int i = 0; i < 5; i++) {
                scanf("%d", &s[n].marks[i]);
                sum += s[n].marks[i];
            }
            s[n].avg = sum / 5.0;
            n++;
        }
        else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                printf("\nName: %s\nID: %d\nMarks: ", s[i].name, s[i].id);
                for (int j = 0; j < 5; j++) {
                    printf("%d ", s[i].marks[j]);
                }
                printf("\nAverage: %.2f\n", s[i].avg);
            }
        }
        else if (choice == 3) {
            int top = 0;
            for (int i = 1; i < n; i++) {
                if (s[i].avg > s[top].avg)
                    top = i;
            }
            printf("\nTop Performer:\nName: %s\nID: %d\nAverage: %.2f\n", s[top].name, s[top].id, s[top].avg);
        }
        else if (choice == 4) {
            for (int i = 0; i < n; i++) {
                int fail = 0;
                for (int j = 0; j < 5; j++) {
                    if (s[i].marks[j] < 40) fail++;
                }
                if (fail > 0) {
                    printf("\nName: %s\nID: %d\nFailed Subjects: %d\n", s[i].name, s[i].id, fail);
                }
            }
        }
        else if (choice == 5) break;
        else printf("Invalid choice\n");
    }

    return 0;
}
