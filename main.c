#include <stdio.h>

void main()
{
    int length, sum, i;
    int numbers[] = {1, 2, 3, 4, 5};

    // calculation length
    length = sizeof(numbers) / sizeof(numbers[0]);

    i = 0;
    sum = 0;
    while (i < length)
    {
        sum += numbers[length];
        i++;
    }
    printf("Sum: %d ", sum);
}