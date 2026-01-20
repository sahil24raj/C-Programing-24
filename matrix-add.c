
#include <stdio.h>

int main() {
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int b[2][3] = {
        {4, 3, 1},
        {6, 5, 2}
    };

    int c[2][3];

    // Matrix addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("Resultant Matrix (A + B):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
