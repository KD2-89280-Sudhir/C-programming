#include <stdio.h>

/*Q.4 Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard.*/

int main() {
    int marks[5], total = 0;
    float percentage;
    char grade;

    printf("Enter marks for 5 subjects (out of 100):\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    percentage = (float)total / 5;

    if (percentage >= 90)
        grade = 'E';
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else
        grade = 'F';

    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (grade == 'E')
        printf("Grade: Ex (Excellent)\n");
    else
        printf("Grade: %c\n", grade);

    return 0;
}
