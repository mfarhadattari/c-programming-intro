#include <stdio.h>

void main()
{
    int num, sum, n;
    sum = 0;
    printf("n = ");
    scanf("%d", &n);

    for (num = 1; num <= n; num++)
    {
        sum += num;
    };
    printf("Sum: %d", sum);
}