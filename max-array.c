
#include <stdio.h>
int arr[] = {1, 2, 3, 4, 5};
int maxArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = maxArray(arr, size);
    printf("Max = %d", result);
    return 0;
}