#include <stdio.h>

void main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    // calculation length
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // for looping
    for (int i = 0; i < length; i++)
    {
        printf("%d \n", numbers[i]);
    }

    // while looping
    int index = 0;
    int sum = 0;
    while (index < length)
    {
        sum += numbers[length];
        index++;
    }
    printf("Sum: %d ", sum);
}
