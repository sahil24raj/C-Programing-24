
#include <stdio.h>

struct Address {
    char city[20];
    int pin;
};

struct Student {
    int roll;
    char name[20];
    struct Address add;
};

int main() {
    struct Student s1;

    printf("Enter roll: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter city: ");
    scanf("%s", s1.add.city);

    printf("Enter pin: ");
    scanf("%d", &s1.add.pin);

    printf("\nStudent Details:\n");
    printf("Roll: %d\nName: %s\nCity: %s\nPIN: %d\n",
            s1.roll, s1.name, s1.add.city, s1.add.pin);

    return 0;
}

