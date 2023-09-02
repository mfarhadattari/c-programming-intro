#include <stdio.h>

// function declaration
int sum(int num1, int num2);

void main()
{
    int result;
    // function calling
    result = sum(10, 15);

    printf("%d", result);
}

// function definition
int sum(int num1, int num2)
{
    return num1 + num2;
}