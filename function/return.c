#include <stdio.h>

// function declaration
int sum();

void main()
{
    int result;
    // function calling
    result = sum();

    printf("%d", result);
}

// function definition
int sum()
{
    int num, sum, n;
    sum = 0;
    printf("n = ");
    scanf("%d", &n);

    for (num = 1; num <= n; num++)
    {
        sum += num;
    };

    // return statement
    return sum;
}