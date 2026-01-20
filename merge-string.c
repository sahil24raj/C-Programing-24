
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Chandigarh University ";
    char str2[20] = "Lucknow";
    char result[100];

    // Copy first string to result
    strcpy(result, str1);

    // Add second string to result
    strcat(result, str2);

    // Print final merged string
    printf("Merged String: %s", result);

    return 0;
}
