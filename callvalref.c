#include <stdio.h>

void swapx(int *p1, int *p2);

void main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Inside the Main Function:\n");
    printf("a = %d, b = %d\n", a, b);
    swapx(&a, &b);
    printf("Inside the Main Function after Swaping:\n");
    printf("a = %d, b = %d\n", a, b);
}

void swapx(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Inside the Swap Function:\n");
    printf("x = %d, y = %d\n", *p1, *p2);
}
