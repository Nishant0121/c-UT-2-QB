#include <stdio.h>

void main()
{
    int n, r, ncr;
    int fact(int no);
    printf("Enter n and r:");
    scanf("%d%d", &n, &r);
    if (n > r)
    {
        ncr = fact(n) / (fact(r) * fact(n - r));
        printf("ncr=%d", ncr);
    }
    else
    {
        printf("Invalid input");
    }
}
int fact(int no)
{
    int i, f = 1;
    for (i = 1; i <= no; i++)
        f = f * i;
    return f;
}