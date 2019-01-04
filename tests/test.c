/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/compact.h"
#include "./../dist/inc/print.h"

int main()
{
    int arr[] = {15, 0, 36, 0, 100, 30};
    int length = sizeof(arr) / sizeof(int);

    arrifyCompact(arr, length);

    //arrifyPrint(arr, 0, length);

    return EXIT_SUCCESS;
}
