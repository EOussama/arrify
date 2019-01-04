/**
 * The compact file.
 */

#include <stdlib.h>

/**
 * Removes all the falsy values from an array (0, false, '\0', NULL)
 */
int arrifyCompact(int *arr, int length)
{
    int ret[] = {};

    for (int i = 0, j = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            ret[j++] = arr[i];
        }
    }

    arr = ret;
}
