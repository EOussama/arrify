/**
 * The array list's prototypes.
 */

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct
{
    int *data;
    int count;
} ArrayList;

ArrayList newArrayList();

void insertArrayList(ArrayList *arrayList, int value, int index);

void pushArrayList(ArrayList *arrayList, int value);

void removeArrayList(ArrayList *arrayList, int index);

void popArrayList(ArrayList *arrayList);

int getArrayList(ArrayList *arrayList, int index);

void clearArrayList(ArrayList *arrayList);

#endif
