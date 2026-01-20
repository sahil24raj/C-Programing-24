#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1) return 1;

    int nsp = n - 1;
    int nst = 1;

    for (int i = 1; i <= n; i++) {

        // print leading spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        // print stars
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        nsp--;
        nst += 2;
        printf("\n");
    }

    nsp = 1;                // assign, do not redeclare
    nst = (2 * n - 3);

    for (int i = 1; i <= n - 1; i++) {

        // print leading spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        // print stars
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        nsp++;
        nst -= 2;
        printf("\n");
    }
    return 0;
}