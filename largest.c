#include <stdio.h>
int main() {
    int arr[5] = {10, 25, 3, 47, 19}, max = arr[0];
    for(int i = 1; i < 5; ++i)
        if(arr[i] > max) max = arr[i];
    printf("Largest = %d", max);
    return 0;
}
