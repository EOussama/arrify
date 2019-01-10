/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/ArrayList.h"
#include "./../dist/inc/compact.h"
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
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 0);
    pushArrayList(&arr, 123);
    pushArrayList(&arr, 123);
    pushArrayList(&arr, 123);

    arrifyCompact(&arr);
    arrifyPrint(&arr, 0, arr.count);

    return EXIT_SUCCESS;
}
