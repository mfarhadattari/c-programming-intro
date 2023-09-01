#include <stdio.h>

void main()
{
    int age;
    printf("What is your age?: ");
    scanf("%d", &age); // here & used to indicate memory location of age
    printf("Your age is %d", age);
}