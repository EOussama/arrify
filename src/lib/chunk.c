/**
 * The chunk's file.
 */

#include <stdio.h>
#include <stdlib.h>
#include "../inc/ArrayList.h"

/**
 * Chunks an array.
 */
int **arrifyChunk(ArrayList *src, int chunks)
{
    int **dest = (int **)malloc(sizeof(int *));

    for (int i = 0, k = 0; i < src->count; i++)
    {
        if (i % chunks == 0)
        {
            int *arr = (int *)malloc(sizeof(int) * chunks);

            for (int j = i; j < i + chunks; j++)
            {
                if (j < src->count)
                {
                    arr[j - i] = getArrayList(src, j);
                }
            }

            dest = (int **)realloc(dest, sizeof(dest) + sizeof(int));
            dest[k++] = arr;
        }
    }

    return dest;
}
