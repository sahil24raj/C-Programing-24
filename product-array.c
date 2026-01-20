#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5};

int productArray(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = productArray(arr, size);
    printf("Product = %d", result);
    return 0;
}
