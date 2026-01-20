
#include <stdio.h>

int main() {
    int n = 4; // number of rows
    
    for (int i = 1; i <= n; i++) {

        // print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }

        // print ascending numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
