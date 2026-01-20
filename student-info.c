<<<<<<< HEAD

#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student student1={"Alice", 20, 85.5};
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
=======

#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student student1={"Alice", 20, 85.5};
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
>>>>>>> d79695b95f42d58b18f7b78f5dd8b0dd14b63935
}