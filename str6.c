
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char doj[20];   // Date of Joining
    float salary;
    char address[100];
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.name);  // to take full string including spaces

    printf("Enter Date of Joining (DD-MM-YYYY): ");
    scanf(" %[^\n]s", emp.doj);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Address: ");
    scanf(" %[^\n]s", emp.address);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Date of Joining: %s\n", emp.doj);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %s\n", emp.address);

    return 0;
}
