#include <stdio.h>
#include <string.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *fName, const char *lName, double salary) {
    strcpy(e->firstName, fName);
    strcpy(e->lastName, lName);
    e->monthlySalary = (salary < 0) ? 0 : salary;
}

void set_salary(struct Employee *e, double sal) {
    if (sal >= 0) {
        e->monthlySalary = sal;
    } else {
        printf("Invalid salary! Salary cannot be negative.\n");
    }
}

void emp_display(struct Employee *e) {
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Yearly Salary: %.2lf\n", e->monthlySalary * 12);
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Alice", "Smith", 6000.0);

    printf("Initial Salaries:\n");
    emp_display(&emp1);
    printf("\n");
    emp_display(&emp2);
    printf("\n");

    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    printf("Salaries after 10%% raise:\n");
    emp_display(&emp1);
    printf("\n");
    emp_display(&emp2);
    
    return 0;
}
