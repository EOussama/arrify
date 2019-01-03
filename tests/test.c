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

    insertArrayList_int(&arrayList, 99999999, 3);
    removeArrayList_int(&arrayList, 3);
    popArrayList_int(&arrayList);
    puts("\nChanged:\n");

    for (int i = 0; i < arrayList.count; i++)
    {
        printf("%d\t%d\n", i, getArrayList_int(&arrayList, i));
    }

    clearArrayList_int(&arrayList);
    puts("\nCleared:\n");

    for (int i = 0; i < arrayList.count; i++)
    {
        printf("%d\n", getArrayList_int(&arrayList, i));
    }

    return EXIT_SUCCESS;
}
