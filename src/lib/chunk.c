/**
 * The chunk's file.
 */

#include <stdio.h>
#include <stdlib.h>

int **arrifyChunk(int *src, int length, int chunks)
{
    int **dest = (int **)malloc(sizeof(int *));

    for (int i = 0, k = 0; i < length; i++)
    {
        if (i % chunks == 0)
        {
            int *arr = (int *)malloc(sizeof(int) * chunks);

            for (int j = i; j < i + chunks; j++)
            {
                if (j < length)
                {
                    arr[j - i] = *(src + j);
                }
            }

            dest = (int **)realloc(dest, sizeof(dest) + sizeof(int));
            dest[k++] = arr;
        }
    }

    return dest;
}
