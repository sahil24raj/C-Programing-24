#include <stdio.h>

int main() {
    int n = 4; // size of pattern
    
    for(int i = n; i >= n; i--) {       // rows
        for(int j = 1; j <= i+3; j++) {   // columns
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

