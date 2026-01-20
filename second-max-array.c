#include <stdio.h>

int main() {
    int arr[] = {12, 7, 9, 20, 15, 8, 3, 10, 5, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    // Step 1: find maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int smax = arr[0];

    // Step 2: find second maximum
    for (int j = 1; j < n; j++) {
        if (arr[j] > smax && arr[j] < max) {
            smax = arr[j];
        }
    }

    printf("Second maximum element is: %d\n", smax);

    return 0;
}
