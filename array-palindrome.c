
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int isPalindrome = 1;

    int start = 0, end = n - 1;

    // Check from both ends
    while (start < end) {
        if (arr[start] != arr[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The array is a palindrome.\n");
    else
        printf("The array is NOT a palindrome.\n");

    return 0;
}
