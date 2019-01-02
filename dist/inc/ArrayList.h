/**
 * The array list's prototypes.
 */

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct
{
    int *array;
    int count;
} ArrayList_int;

ArrayList_int newArrayList_int();

void addArrayList_int(ArrayList_int *arrayList, int value);

short removeArrayList_int(ArrayList_int *arrayList, int index);

#endif
