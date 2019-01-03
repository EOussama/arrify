/**
 * The array list's prototypes.
 */

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct
{
    int *data;
    int count;
} ArrayList_int;

ArrayList_int newArrayList_int();

void insertArrayList_int(ArrayList_int *arrayList, int value, int index);

void pushArrayList_int(ArrayList_int *arrayList, int value);

void removeArrayList_int(ArrayList_int *arrayList, int index);

void popArrayList_int(ArrayList_int *arrayList);

int getArrayList_int(ArrayList_int *arrayList, int index);

void clearArrayList_int(ArrayList_int *arrayList);

#endif
