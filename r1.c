
#include<stdio.h>   
struct Student {
    int roll_no;
    char name[50];
    float marks;
    char address[100];
};
int main() {
    struct Student student1;

    // Assigning values to student1
    student1.roll_no = 101;
    snprintf(student1.name, sizeof(student1.name), "John Doe");
    student1.marks = 89.5;
    snprintf(student1.address, sizeof(student1.address), "123 Main St, Anytown, USA");

    // Printing student1 details
    printf("Student Details:\n");
    printf("Roll No: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);
    printf("Address: %s\n", student1.address);

    return 0;
}