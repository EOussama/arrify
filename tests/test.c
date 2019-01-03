/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/ArrayList.h"

int main()
{
    ArrayList_int arrayList = newArrayList_int();

    pushArrayList_int(&arrayList, 36);
    pushArrayList_int(&arrayList, 100);
    pushArrayList_int(&arrayList, 33);
    pushArrayList_int(&arrayList, 74);

    for (int i = 0; i < arrayList.count; i++)
    {
        printf("%d\t%d\n", i, getArrayList_int(&arrayList, i));
    }

    return EXIT_SUCCESS;
}
