#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 

    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));
    for(int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        getchar(); 
    }

    printf("\nStudents scoring more than 75:\n");
    for(int i = 0; i < n; i++) {
        if(students[i].marks > 75) {
            printf("%s: %d\n", students[i].name, students[i].marks);
        }
    }

    free(students);
    return 0;
}
