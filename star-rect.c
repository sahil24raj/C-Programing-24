
#include <stdio.h>

int main() {
    int n = 4;  // rows
    int m = 6;  // columns
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {

            // printing star for boundary conditions
            if(i == 1 || i == n || j == 1 || j == m) {
                printf("* ");
            } 
            else {
                printf("  "); // spaces for hollow part
            }
        }
        printf("\n");
    }

    return 0;
}
