
#include <stdio.h>
int main () {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sum_even=0, sum_odd=0;
    for(int i=0; i<10; i++) {   
        if(arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
    printf("Difference (Even - Odd): %d\n", sum_even - sum_odd);
    return 0;

}