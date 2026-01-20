#include <stdio.h>

int main() {
    int n;
    printf("Enter side of triangle : ");
    if (scanf("%d", &n) != 1) return 1;

    // nested loops
    for (int i = 1; i <= n; i++) {      // rows (was i >= n)
        for (int j = 1; j <= n + 1 - i; j++) {   // cols
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
