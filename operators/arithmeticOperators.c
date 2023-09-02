#include <stdio.h>

void main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    // Addition
    int addition = num1 + num2;
    printf("Addition: %d \n", addition);

    // Subtraction
    int deference = num1 - num2;
    printf("Subtraction: %d \n", deference);

    // Multiplication
    int multiplication = num1 * num2;
    printf("Multiplication: %d \n", multiplication);

    // Division
    int division = num1 / num2;
    printf("Division: %d \n", division);

    // Modulus
    int modulus = num1 % num2;
    printf("Modulus: %d \n", modulus);

    // increase by one
    num1++;
    // decrease by one
    num2--;
    printf("%d %d", num1, num2);
}