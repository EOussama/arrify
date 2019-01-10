/**
 * The compact file.
 */

#include <stdlib.h>
#include "./../inc/ArrayList.h"

/**
 * Removes all the falsy values from an array (0, false, '\0', NULL)
 */
void arrifyCompact(ArrayList *arr)
{
    int i = 0;

    while(i < arr->count)
    {
        if (getArrayList(arr, i) == 0)
        {
            removeArrayList(arr, i);
        }
        else
        {
            i++;
        }
    }
}
