
#include <stdio.h>
struct Student {
    int roll_no;
    char name[50];
    char dob[20];   // Date of Birth
    float marks;
    char address[100];
};
int main() {
    struct Student stu;

    printf("Enter Student Roll Number: ");
    scanf("%d", &stu.roll_no);

    printf("Enter Student Name: ");
    scanf("%s", stu.name);  // to take full string including spaces

    printf("Enter Date of Birth (DD-MM-YYYY): ");
    scanf("%s", stu.dob);

    printf("Enter Marks: ");
    scanf("%f", &stu.marks);

    printf("Enter Address: ");
    scanf("%s", stu.address);

    printf("\n----- Student Details -----\n");
    printf("Roll Number: %d\n", stu.roll_no);
    printf("Name: %s\n", stu.name);
    printf("Date of Birth: %s\n", stu.dob);
    printf("Marks: %.2f\n", stu.marks);
    printf("Address: %s\n", stu.address);

    return 0;
}
