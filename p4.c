
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: "); 
    scanf("%d", &n);       
    int num = 1;

5

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
