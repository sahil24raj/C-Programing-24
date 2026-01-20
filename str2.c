
#include <stdio.h>  
struct employee {
    int id;
    char name[30];
    float salary;
    char department[20];
};
int main() {
    struct employee emp1;

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp1.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter Employee Department: ");
    scanf("%s", emp1.department);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nDepartment: %s\n",
           emp1.id, emp1.name, emp1.salary, emp1.department);

    return 0;
}