
#include <stdio.h>
int main() {
    int arr[6] = {40, 12, 67, 89, 23, 54};
    int i, max1 = arr[0], max2 = -1;

    for(i = 1; i < 6; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("Second Largest Element = %d", max2);

    return 0;
}
