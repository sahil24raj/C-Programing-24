
#include <stdio.h>
int fact (int n) {
    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return -1; // Indicate an error
    }
    if ((n == 1) || (n == 0))
        return 1;
    
    return n * fact(n - 1);

    }

int main() {
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("%d\n",fact(n));
    return 0;
}