#include <stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are Child!");
    }
    else if (age >= 18 && age <= 35)
    {
        printf("You are Youth!");
    }
    else
    {
        printf("You are Oldest!");
    };
}