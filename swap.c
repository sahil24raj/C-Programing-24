
#include <stdio.h>
int main() {
    int a, b, temp;

    // Assigning values to a and b
    a = 5;
    b = 10;

    // Printing original values
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Printing swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}