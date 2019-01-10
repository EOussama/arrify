/**
 * The print's file.
 */

#include <stdio.h>
#include "../inc/ArrayList.h"

void arrifyPrint(ArrayList arr, int start, int length)
{
    const int end = start + length;

    printf("From [%d] to [%d] => ", start, start + length - 1);

    printf("(%d)[", length);

    for (int i = start; i < end; i++)
    {
        printf("%d", getArrayList(&arr, i));

        if (i < end - 1)
        {
            printf(", ");
        }
    }

    printf("]\n");
}
