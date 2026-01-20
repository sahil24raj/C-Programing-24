
#include <stdio.h>
int countGreaterThanX(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 5, 8, 12, 20, 3, 7};
    int x = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = countGreaterThanX(arr, size, x);
    printf("Count of elements greater than %d = %d", x, result);
    return 0;
}