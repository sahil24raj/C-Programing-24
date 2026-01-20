
#include <stdio.h>

int main() {
    int n;
    printf("Enter side of triangle : ");
    if (scanf("%d", &n) != 1) return 1;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}