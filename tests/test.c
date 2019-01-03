/**
 * Arrify tests
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../dist/inc/ArrayList.h"

int main()
{
    ArrayList_int arrayList = newArrayList_int();

    addArrayList_int(&arrayList, 36);
    addArrayList_int(&arrayList, 100);
    addArrayList_int(&arrayList, 26);
    addArrayList_int(&arrayList, 199);
    removeArrayList_int(&arrayList, 1);

    for (int i = 0; i<arrayList.count; i++) 
    {
        printf("%d\n", getArrayList_int(&arrayList, i));
    }

    clearArrayList_int(&arrayList);
    puts("\nCleared\n");

    for (int i = 0; i<arrayList.count; i++) 
    {
        printf("%d\n", getArrayList_int(&arrayList, i));
    }

    return EXIT_SUCCESS;
}
