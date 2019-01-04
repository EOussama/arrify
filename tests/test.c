/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/chunk.h"
#include "./../dist/inc/print.h"

int main()
{
    int 
        src[] = {325, 114, 983, 646, 13},
        chunks = 3,
        length = sizeof(src) / sizeof(int);

    int **dest = (int **)malloc(sizeof(int *));

    dest = arrifyChunk(src, length, chunks);

    for (int i = 0; i<(float)length/chunks; i++)
    {
        arrifyPrint(dest[i], 0, chunks);
    }

    return EXIT_SUCCESS;
}
