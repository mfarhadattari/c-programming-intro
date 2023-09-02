#include <stdio.h>

void main()
{
    int num;

    for (num = 1; num <= 10; num++)
    {
        // stop lopping if condition matched
        if (num == 7)
        {
            break; // stop lopping and go outside of loop
        }
        // skip this iteration if condition matched
        else if (num == 5)
        {
            continue; // skip this iteration and go with next
        }
        printf("%d \n", num);
    };
}