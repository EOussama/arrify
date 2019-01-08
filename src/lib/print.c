/**
 * The print's file.
 */

#include <stdio.h>

void arrifyPrint(int *arr, int start, int length)
{
    const int end = start + length;

    printf("From [%d] to [%d] => ", start, start + length - 1);

    printf("(%d)[", length);

    for (int i = start; i < end; i++)
    {
        printf("%d", *(arr + i));

        if (i < end - 1)
        {
            printf(", ");
        }
    }

    printf("]\n");
}
