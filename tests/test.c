/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/print.h"

int main()
{
    int x[5] = {1, 2, 3, 4, 5};

    arrifyPrint(x, 0, 5);

    return EXIT_SUCCESS;
}
