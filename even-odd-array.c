#include <stdio.h>
int main() {
    int arr[7] = {3, 8, 12, 5, 9, 14, 21};
    int i, even = 0, odd = 0;

    for(i = 0; i < 7; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total Even Numbers = %d\n", even);
    printf("Total Odd Numbers = %d", odd);

    return 0;
}
