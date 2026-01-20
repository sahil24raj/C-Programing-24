

#include <stdio.h>
int main() {
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int product=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            product*=arr[i][j];
        }
    }
    printf("Product of all elements in the matrix is: %d\n", product);
    return 0;
    
}