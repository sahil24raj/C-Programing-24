#include <stdio.h>
int main() {
    int arr[] = {-1, 0, 5, -3, 2, 0}, pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < 6; ++i) {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive: %d, Negative: %d, Zero: %d", pos, neg, zero);
    return 0;
}
