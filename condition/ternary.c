#include <stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // true and false
    age >= 18 ? printf("You are adult!") : printf("You are baby!");
    // only true
    age == 33 && printf("\nLast year of your govt job!");
}