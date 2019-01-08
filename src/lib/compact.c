/**
 * The compact file.
 */

#include <stdlib.h>
#include "./../inc/print.h"

/**
 * Removes all the falsy values from an array (0, false, '\0', NULL)
 */
void arrifyCompact(int *arr, int length)
{
    int compactLength = 0;
    int **compact = (int **)malloc(sizeof(int *) * 0);

    // Extracting the non-falsy values.
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            // Resizing the pointer array.
            compact = (int **)realloc(compact, sizeof(int *) * ++compactLength);

            // Affecting the non-falsy value.
            *(compact + compactLength - 1) = &arr[i];
        }
    }

    // Affecting non-falsy values.
    for (int i = 0; i < length; i++)
    {
        if (i < compactLength)
        {
            arr[i] = *(int *)*(compact + i);
        }
        else
        {
            arr[i] = 0;
        }
    }
}
