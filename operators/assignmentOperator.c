#include <stdio.h>

void main()
{
    int num;
    // assign
    num = 5;
    printf("%d \n", num);

    // assign and addition
    num += 5; // ==> num = num + 5;
    printf("%d \n", num);

    // assign and subtraction
    num -= 5; // ==> num = num - 5;
    printf("%d \n", num);

    // assign and multiplication
    num *= 2; // ==> num = num * 2;
    printf("%d \n", num);

    // assign and division
    num /= 2; // ==> num = num / 2;
    printf("%d \n", num);

    // assign and modulus
    num %= 2; // ==> num = num % 2;
    printf("%d \n", num);
}