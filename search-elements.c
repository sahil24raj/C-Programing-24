
#include <stdio.h>
int main () {
    int arr []={12, 7, 9, 20, 15, 8, 3, 10, 5, 14};

    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=1; i<n; i++) {
        if(arr[i] > arr[max]) {
            max = i;
        }

    }
}