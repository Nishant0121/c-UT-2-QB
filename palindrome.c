#include <stdio.h>

void main()
{
    char string[100];
    int length = 0;
    int i;
    printf("Enter a string: ");
    scanf("%s", string);
    while (string[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length / 2; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            printf("%s is not a palindrome\n", string);
            break;
        }
        else
        {
            printf("%s is a palindrome\n", string);
            break;
        }
    }
}
