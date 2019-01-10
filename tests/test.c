/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/ArrayList.h"
#include "./../dist/inc/compact.h"
#include "./../dist/inc/chunk.h"
#include "./../dist/inc/print.h"

int main()
{
    ArrayList arr = newArrayList();

    pushArrayList(&arr, 0);
    pushArrayList(&arr, 321);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 26);
    pushArrayList(&arr, 15);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 359);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 123);

    arrifyCompact(&arr);
    arrifyPrint(&arr, 0, arr.count);

    int **result = arrifyChunk(&arr, 2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        puts("");
    }

    return EXIT_SUCCESS;
}
