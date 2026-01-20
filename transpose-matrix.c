
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int r, c;

    // Input rows & columns
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Creating transpose (swap rows & columns)
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix:\n");
    for(int i = 0; i < c; i++) {      // NOTE: rows become columns
        for(int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
