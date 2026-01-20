#include <stdio.h>
#include <string.h>
struct Student {
int roll;
char name[50];
float marks;
};
void addStudent() {
FILE *fp = fopen("students.dat", "ab"); // binary append
struct Student s;
if (fp == NULL) {
printf("Error opening file!\n");
return;
}
printf("Enter Roll: ");
scanf("%d", &s.roll);
printf("Enter Name: ");
scanf("%s", s.name); // for single-word names
printf("Enter Marks: ");
scanf("%f", &s.marks);
fwrite(&s, sizeof(s), 1, fp);
fclose(fp);
printf("Student Added\n");
}
void searchStudent() {
FILE *fp = fopen("students.dat", "rb");
struct Student s;
int roll, found = 0;
if (fp == NULL) {
printf("No data file found!\n");
return;
}
printf("Enter Roll to Search: ");
scanf("%d", &roll);
while (fread(&s, sizeof(s), 1, fp) == 1) {
if (s.roll == roll) {
printf("\nStudent Found\n");
printf("Roll : %d\n", s.roll);
printf("Name : %s\n", s.name);
printf("Marks: %.2f\n", s.marks);
found = 1;
break;
}
}
if (!found)
printf("Student Not Found\n");
fclose(fp);
}
void deleteStudent() {
FILE *fp = fopen("students.dat", "rb");
FILE *temp = fopen("temp.dat", "wb");
struct Student s;
int roll, found = 0;
if (fp == NULL || temp == NULL) {
printf("Error opening file!\n");
return;
}
printf("Enter Roll to Delete: ");
scanf("%d", &roll);
while (fread(&s, sizeof(s), 1, fp) == 1) {
if (s.roll == roll) {
found = 1; // skip writing this record
continue;
}
fwrite(&s, sizeof(s), 1, temp);
}
fclose(fp);
fclose(temp);
remove("students.dat");
rename("temp.dat", "students.dat");
}
int main() {
int choice;
while (1) {
printf("\n1. Add Student\n");
printf("2. Search Student\n");
printf("3. Delete Student\n");
printf("4. Exit\n");
printf("Enter Choice: ");
scanf("%d", &choice);
if (choice == 1)
addStudent();
else if (choice == 2)
searchStudent();
else if (choice == 3)
deleteStudent();
else if (choice == 4)
break;
else
printf("Invalid Choice\n");
}
return 0;
}
