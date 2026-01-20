#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    char uid[11];    // 10 chars + NUL
    char section[3]; // 1 char + NUL (or increase if needed)
    char branch[20];
    float cgpa;
};

int main()
{
    struct student stu;

    printf("Enter Student Name: ");
    scanf("%49s", stu.name);
    printf("Enter Student UID: ");
    scanf("%10s", stu.uid);
    printf("Enter Student Section: ");
    scanf("%2s", stu.section);
    printf("Enter Student Branch: ");
    scanf("%19s", stu.branch);
    printf("Enter Student CGPA: ");
    scanf("%f", &stu.cgpa);
    printf("\n----- Student Details -----\n");
    printf("Name: %s\n", stu.name);
    printf("UID: %s\n", stu.uid);
    printf("Section: %s\n", stu.section);
    printf("Branch: %s\n", stu.branch);
    printf("CGPA: %.2f\n", stu.cgpa);
    return 0;
}
