
#include <stdio.h>

int main() {
    int n = 4; // rows
    int m = 6; // stars per row

    for (int i = 0; i < n; i++) {

        // print leading spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }

        // print stars
        for (int j = 0; j < m; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
