#include <stdio.h>

void main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    // each element size
    int eachSize = sizeof(numbers[0]);
    printf("Each element size: %d  \n", eachSize);

    // full array size
    int arraySize = sizeof(numbers);
    printf("Array Size: %d \n", arraySize);

    // calculate array length
    int length = arraySize / eachSize;
    printf("Array length: %d ", length);
}