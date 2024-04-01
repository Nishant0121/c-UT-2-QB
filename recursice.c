#include <stdio.h>

int power(int x, int n);

void main()
{
    int n, x, y;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    y = power(x, n);
    printf("%d to the power of %d is %d\n", x, n, y);
}

int power(int x, int n)
{
    if (n == 1)
        return x;
    else
        return (x * power(x, n - 1));
}
