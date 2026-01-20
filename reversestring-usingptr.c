#include <stdio.h>

int main()
{
    char str[] = "raghav";
    int i, j;
    char temp;

    /* Find length of string */
    for (j = 0; str[j] != '\0'; j++);

    j = j - 1;   // last index

    /* Reverse string using for loop */
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}
