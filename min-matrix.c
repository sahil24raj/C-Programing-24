
#include <stdio.h>
#include <limits.h>
int main() {
    int matrix[3][3] = {
        {5, 12, 7},
        {9, 3, 15},
        {8, 6, 4}
    };

    int min = INT_MAX;

    // Find minimum element in the matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Minimum element in the matrix is: %d\n", min);

    return 0;
}