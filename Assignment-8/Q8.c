#include <stdio.h>

/* Q.8  Write a program to read the name of a student (studentName), roll 
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
alphanumeric string. Display the data as read*/

struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

void inputStudent(struct Student *s) {
    printf("Enter Student Name: ");
    gets(s->studentName);

    printf("Enter Roll Number: ");
    scanf("%s", s->rollNo);

    printf("Enter Total Marks: ");
    scanf("%f", &s->totalMarks);
}

void displayStudent(struct Student *s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->studentName);
    printf("Roll Number: %s\n", s->rollNo);
    printf("Total Marks: %.2f\n", s->totalMarks);
}

int main() {
    struct Student s;
    inputStudent(&s);
    displayStudent(&s);

    return 0;
}
