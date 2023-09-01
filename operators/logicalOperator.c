#include <stdio.h>
#include <stdbool.h>

void main()
{
    bool isAdult, isMarried;
    isAdult = true;
    isMarried = false;
    // logical AND Operator
    printf("%d \n", isAdult && isMarried);

    // logical OR operator
    printf("%d \n", isAdult || isMarried);

    // logical NOT operator
    printf("%d \n", !isAdult);
}