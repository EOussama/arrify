/**
 * The print's file.
 */

#include <stdio.h>

void arrifyPrint(int *arr, int start, int length)
{
    const int end = start + length;

    printf("[%d] to [%d] ", start, start + length);

    printf("[");

    for (int i = start; i < end; i++)
    {
        printf("%d", *(arr + i));

        if (i < end - 1)
        {
            printf(", ");
        }
    }

    printf("]");
}

void arrifyInfo(int *arr)
{
    // Size
    // Numbers
    // Type
    // Pointer
}
