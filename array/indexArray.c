#include <stdio.h>

void main()
{
    int numbers[] = {1, 2, 3, 4};

    // get value.
    printf("%d \n", numbers[2]);

    // assign value
    numbers[4] = 5;
    printf("%d \n", numbers[4]);

    // reassign value
    numbers[1] = 10;
    printf("%d \n", numbers[1]);
}
